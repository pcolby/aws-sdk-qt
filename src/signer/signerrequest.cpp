// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signerrequest.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::SignerRequest
 * \brief The SignerRequest class provides an interface for Signer requests.
 *
 * \inmodule QtAwsSigner
 */

/*!
 * \enum SignerRequest::Action
 *
 * This enum describes the actions that can be performed as Signer
 * requests.
 *
 * \value AddProfilePermissionAction Signer AddProfilePermission action.
 * \value CancelSigningProfileAction Signer CancelSigningProfile action.
 * \value DescribeSigningJobAction Signer DescribeSigningJob action.
 * \value GetSigningPlatformAction Signer GetSigningPlatform action.
 * \value GetSigningProfileAction Signer GetSigningProfile action.
 * \value ListProfilePermissionsAction Signer ListProfilePermissions action.
 * \value ListSigningJobsAction Signer ListSigningJobs action.
 * \value ListSigningPlatformsAction Signer ListSigningPlatforms action.
 * \value ListSigningProfilesAction Signer ListSigningProfiles action.
 * \value ListTagsForResourceAction Signer ListTagsForResource action.
 * \value PutSigningProfileAction Signer PutSigningProfile action.
 * \value RemoveProfilePermissionAction Signer RemoveProfilePermission action.
 * \value RevokeSignatureAction Signer RevokeSignature action.
 * \value RevokeSigningProfileAction Signer RevokeSigningProfile action.
 * \value StartSigningJobAction Signer StartSigningJob action.
 * \value TagResourceAction Signer TagResource action.
 * \value UntagResourceAction Signer UntagResource action.
 */

/*!
 * Constructs a SignerRequest object for Signer \a action.
 */
SignerRequest::SignerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SignerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SignerRequest::SignerRequest(const SignerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SignerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SignerRequest object to be equal to \a other.
 */
SignerRequest& SignerRequest::operator=(const SignerRequest &other)
{
    Q_D(SignerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SignerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SignerRequestPrivate.
 */
SignerRequest::SignerRequest(SignerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Signer action to be performed by this request.
 */
SignerRequest::Action SignerRequest::action() const
{
    Q_D(const SignerRequest);
    return d->action;
}

/*!
 * Returns the name of the Signer action to be performed by this request.
 */
QString SignerRequest::actionString() const
{
    return SignerRequestPrivate::toString(action());
}

/*!
 * Returns the Signer API version implemented by this request.
 */
QString SignerRequest::apiVersion() const
{
    Q_D(const SignerRequest);
    return d->apiVersion;
}

/*!
 * Sets the Signer action to be performed by this request to \a action.
 */
void SignerRequest::setAction(const Action action)
{
    Q_D(SignerRequest);
    d->action = action;
}

/*!
 * Sets the Signer API version to include in this request to \a version.
 */
void SignerRequest::setApiVersion(const QString &version)
{
    Q_D(SignerRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool SignerRequest::operator==(const SignerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Signer queue name.
 *
 * @par From Signer FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Signer queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SignerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SignerRequest::clearParameter(const QString &name)
{
    Q_D(SignerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SignerRequest::clearParameters()
{
    Q_D(SignerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SignerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SignerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SignerRequest::parameters() const
{
    Q_D(const SignerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SignerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SignerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SignerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SignerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Signer request using the given
 * \a endpoint.
 *
 * This Signer implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SignerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SignerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Signer::SignerRequestPrivate
 * \brief The SignerRequestPrivate class provides private implementation for SignerRequest.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a SignerRequestPrivate object for Signer \a action,
 * with public implementation \a q.
 */
SignerRequestPrivate::SignerRequestPrivate(const SignerRequest::Action action, SignerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-08-25"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SignerRequest class's copy constructor.
 */
SignerRequestPrivate::SignerRequestPrivate(const SignerRequestPrivate &other,
                                     SignerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SignerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Signer service's Action
 * query parameters.
 */
QString SignerRequestPrivate::toString(const SignerRequest::Action &action)
{
    #define ActionToString(action) \
        case SignerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddProfilePermission);
        ActionToString(CancelSigningProfile);
        ActionToString(DescribeSigningJob);
        ActionToString(GetSigningPlatform);
        ActionToString(GetSigningProfile);
        ActionToString(ListProfilePermissions);
        ActionToString(ListSigningJobs);
        ActionToString(ListSigningPlatforms);
        ActionToString(ListSigningProfiles);
        ActionToString(ListTagsForResource);
        ActionToString(PutSigningProfile);
        ActionToString(RemoveProfilePermission);
        ActionToString(RevokeSignature);
        ActionToString(RevokeSigningProfile);
        ActionToString(StartSigningJob);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Signer
} // namespace QtAws
