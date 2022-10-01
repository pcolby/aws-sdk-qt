// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acmrequest.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::AcmRequest
 * \brief The AcmRequest class provides an interface for Acm requests.
 *
 * \inmodule QtAwsAcm
 */

/*!
 * \enum AcmRequest::Action
 *
 * This enum describes the actions that can be performed as Acm
 * requests.
 *
 * \value AddTagsToCertificateAction Acm AddTagsToCertificate action.
 * \value DeleteCertificateAction Acm DeleteCertificate action.
 * \value DescribeCertificateAction Acm DescribeCertificate action.
 * \value ExportCertificateAction Acm ExportCertificate action.
 * \value GetAccountConfigurationAction Acm GetAccountConfiguration action.
 * \value GetCertificateAction Acm GetCertificate action.
 * \value ImportCertificateAction Acm ImportCertificate action.
 * \value ListCertificatesAction Acm ListCertificates action.
 * \value ListTagsForCertificateAction Acm ListTagsForCertificate action.
 * \value PutAccountConfigurationAction Acm PutAccountConfiguration action.
 * \value RemoveTagsFromCertificateAction Acm RemoveTagsFromCertificate action.
 * \value RenewCertificateAction Acm RenewCertificate action.
 * \value RequestCertificateAction Acm RequestCertificate action.
 * \value ResendValidationEmailAction Acm ResendValidationEmail action.
 * \value UpdateCertificateOptionsAction Acm UpdateCertificateOptions action.
 */

/*!
 * Constructs a AcmRequest object for Acm \a action.
 */
AcmRequest::AcmRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AcmRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AcmRequest::AcmRequest(const AcmRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AcmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AcmRequest object to be equal to \a other.
 */
AcmRequest& AcmRequest::operator=(const AcmRequest &other)
{
    Q_D(AcmRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AcmRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmRequestPrivate.
 */
AcmRequest::AcmRequest(AcmRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Acm action to be performed by this request.
 */
AcmRequest::Action AcmRequest::action() const
{
    Q_D(const AcmRequest);
    return d->action;
}

/*!
 * Returns the name of the Acm action to be performed by this request.
 */
QString AcmRequest::actionString() const
{
    return AcmRequestPrivate::toString(action());
}

/*!
 * Returns the Acm API version implemented by this request.
 */
QString AcmRequest::apiVersion() const
{
    Q_D(const AcmRequest);
    return d->apiVersion;
}

/*!
 * Sets the Acm action to be performed by this request to \a action.
 */
void AcmRequest::setAction(const Action action)
{
    Q_D(AcmRequest);
    d->action = action;
}

/*!
 * Sets the Acm API version to include in this request to \a version.
 */
void AcmRequest::setApiVersion(const QString &version)
{
    Q_D(AcmRequest);
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
bool AcmRequest::operator==(const AcmRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Acm queue name.
 *
 * @par From Acm FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Acm queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AcmRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AcmRequest::clearParameter(const QString &name)
{
    Q_D(AcmRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AcmRequest::clearParameters()
{
    Q_D(AcmRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AcmRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AcmRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AcmRequest::parameters() const
{
    Q_D(const AcmRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AcmRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AcmRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AcmRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AcmRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Acm request using the given
 * \a endpoint.
 *
 * This Acm implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AcmRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AcmRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Acm::AcmRequestPrivate
 * \brief The AcmRequestPrivate class provides private implementation for AcmRequest.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a AcmRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
AcmRequestPrivate::AcmRequestPrivate(const AcmRequest::Action action, AcmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-12-08"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AcmRequest class's copy constructor.
 */
AcmRequestPrivate::AcmRequestPrivate(const AcmRequestPrivate &other,
                                     AcmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AcmRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Acm service's Action
 * query parameters.
 */
QString AcmRequestPrivate::toString(const AcmRequest::Action &action)
{
    #define ActionToString(action) \
        case AcmRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddTagsToCertificate);
        ActionToString(DeleteCertificate);
        ActionToString(DescribeCertificate);
        ActionToString(ExportCertificate);
        ActionToString(GetAccountConfiguration);
        ActionToString(GetCertificate);
        ActionToString(ImportCertificate);
        ActionToString(ListCertificates);
        ActionToString(ListTagsForCertificate);
        ActionToString(PutAccountConfiguration);
        ActionToString(RemoveTagsFromCertificate);
        ActionToString(RenewCertificate);
        ActionToString(RequestCertificate);
        ActionToString(ResendValidationEmail);
        ActionToString(UpdateCertificateOptions);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Acm
} // namespace QtAws
