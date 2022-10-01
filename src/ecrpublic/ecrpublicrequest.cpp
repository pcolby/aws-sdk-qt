// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ecrpublicrequest.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::EcrPublicRequest
 * \brief The EcrPublicRequest class provides an interface for EcrPublic requests.
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * \enum EcrPublicRequest::Action
 *
 * This enum describes the actions that can be performed as EcrPublic
 * requests.
 *
 * \value BatchCheckLayerAvailabilityAction EcrPublic BatchCheckLayerAvailability action.
 * \value BatchDeleteImageAction EcrPublic BatchDeleteImage action.
 * \value CompleteLayerUploadAction EcrPublic CompleteLayerUpload action.
 * \value CreateRepositoryAction EcrPublic CreateRepository action.
 * \value DeleteRepositoryAction EcrPublic DeleteRepository action.
 * \value DeleteRepositoryPolicyAction EcrPublic DeleteRepositoryPolicy action.
 * \value DescribeImageTagsAction EcrPublic DescribeImageTags action.
 * \value DescribeImagesAction EcrPublic DescribeImages action.
 * \value DescribeRegistriesAction EcrPublic DescribeRegistries action.
 * \value DescribeRepositoriesAction EcrPublic DescribeRepositories action.
 * \value GetAuthorizationTokenAction EcrPublic GetAuthorizationToken action.
 * \value GetRegistryCatalogDataAction EcrPublic GetRegistryCatalogData action.
 * \value GetRepositoryCatalogDataAction EcrPublic GetRepositoryCatalogData action.
 * \value GetRepositoryPolicyAction EcrPublic GetRepositoryPolicy action.
 * \value InitiateLayerUploadAction EcrPublic InitiateLayerUpload action.
 * \value ListTagsForResourceAction EcrPublic ListTagsForResource action.
 * \value PutImageAction EcrPublic PutImage action.
 * \value PutRegistryCatalogDataAction EcrPublic PutRegistryCatalogData action.
 * \value PutRepositoryCatalogDataAction EcrPublic PutRepositoryCatalogData action.
 * \value SetRepositoryPolicyAction EcrPublic SetRepositoryPolicy action.
 * \value TagResourceAction EcrPublic TagResource action.
 * \value UntagResourceAction EcrPublic UntagResource action.
 * \value UploadLayerPartAction EcrPublic UploadLayerPart action.
 */

/*!
 * Constructs a EcrPublicRequest object for EcrPublic \a action.
 */
EcrPublicRequest::EcrPublicRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EcrPublicRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EcrPublicRequest::EcrPublicRequest(const EcrPublicRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EcrPublicRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EcrPublicRequest object to be equal to \a other.
 */
EcrPublicRequest& EcrPublicRequest::operator=(const EcrPublicRequest &other)
{
    Q_D(EcrPublicRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EcrPublicRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EcrPublicRequestPrivate.
 */
EcrPublicRequest::EcrPublicRequest(EcrPublicRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the EcrPublic action to be performed by this request.
 */
EcrPublicRequest::Action EcrPublicRequest::action() const
{
    Q_D(const EcrPublicRequest);
    return d->action;
}

/*!
 * Returns the name of the EcrPublic action to be performed by this request.
 */
QString EcrPublicRequest::actionString() const
{
    return EcrPublicRequestPrivate::toString(action());
}

/*!
 * Returns the EcrPublic API version implemented by this request.
 */
QString EcrPublicRequest::apiVersion() const
{
    Q_D(const EcrPublicRequest);
    return d->apiVersion;
}

/*!
 * Sets the EcrPublic action to be performed by this request to \a action.
 */
void EcrPublicRequest::setAction(const Action action)
{
    Q_D(EcrPublicRequest);
    d->action = action;
}

/*!
 * Sets the EcrPublic API version to include in this request to \a version.
 */
void EcrPublicRequest::setApiVersion(const QString &version)
{
    Q_D(EcrPublicRequest);
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
bool EcrPublicRequest::operator==(const EcrPublicRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EcrPublic queue name.
 *
 * @par From EcrPublic FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EcrPublic queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EcrPublicRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EcrPublicRequest::clearParameter(const QString &name)
{
    Q_D(EcrPublicRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EcrPublicRequest::clearParameters()
{
    Q_D(EcrPublicRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EcrPublicRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EcrPublicRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EcrPublicRequest::parameters() const
{
    Q_D(const EcrPublicRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EcrPublicRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EcrPublicRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EcrPublicRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EcrPublicRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EcrPublic request using the given
 * \a endpoint.
 *
 * This EcrPublic implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EcrPublicRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EcrPublicRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EcrPublic::EcrPublicRequestPrivate
 * \brief The EcrPublicRequestPrivate class provides private implementation for EcrPublicRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a EcrPublicRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
EcrPublicRequestPrivate::EcrPublicRequestPrivate(const EcrPublicRequest::Action action, EcrPublicRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-10-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EcrPublicRequest class's copy constructor.
 */
EcrPublicRequestPrivate::EcrPublicRequestPrivate(const EcrPublicRequestPrivate &other,
                                     EcrPublicRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EcrPublicRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EcrPublic service's Action
 * query parameters.
 */
QString EcrPublicRequestPrivate::toString(const EcrPublicRequest::Action &action)
{
    #define ActionToString(action) \
        case EcrPublicRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchCheckLayerAvailability);
        ActionToString(BatchDeleteImage);
        ActionToString(CompleteLayerUpload);
        ActionToString(CreateRepository);
        ActionToString(DeleteRepository);
        ActionToString(DeleteRepositoryPolicy);
        ActionToString(DescribeImageTags);
        ActionToString(DescribeImages);
        ActionToString(DescribeRegistries);
        ActionToString(DescribeRepositories);
        ActionToString(GetAuthorizationToken);
        ActionToString(GetRegistryCatalogData);
        ActionToString(GetRepositoryCatalogData);
        ActionToString(GetRepositoryPolicy);
        ActionToString(InitiateLayerUpload);
        ActionToString(ListTagsForResource);
        ActionToString(PutImage);
        ActionToString(PutRegistryCatalogData);
        ActionToString(PutRepositoryCatalogData);
        ActionToString(SetRepositoryPolicy);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UploadLayerPart);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EcrPublic
} // namespace QtAws
