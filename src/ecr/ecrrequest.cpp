/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ecrrequest.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::EcrRequest
 * \brief The EcrRequest class provides an interface for Ecr requests.
 *
 * \inmodule QtAwsEcr
 */

/*!
 * \enum EcrRequest::Action
 *
 * This enum describes the actions that can be performed as Ecr
 * requests.
 *
 * \value BatchCheckLayerAvailabilityAction Ecr BatchCheckLayerAvailability action.
 * \value BatchDeleteImageAction Ecr BatchDeleteImage action.
 * \value BatchGetImageAction Ecr BatchGetImage action.
 * \value BatchGetRepositoryScanningConfigurationAction Ecr BatchGetRepositoryScanningConfiguration action.
 * \value CompleteLayerUploadAction Ecr CompleteLayerUpload action.
 * \value CreatePullThroughCacheRuleAction Ecr CreatePullThroughCacheRule action.
 * \value CreateRepositoryAction Ecr CreateRepository action.
 * \value DeleteLifecyclePolicyAction Ecr DeleteLifecyclePolicy action.
 * \value DeletePullThroughCacheRuleAction Ecr DeletePullThroughCacheRule action.
 * \value DeleteRegistryPolicyAction Ecr DeleteRegistryPolicy action.
 * \value DeleteRepositoryAction Ecr DeleteRepository action.
 * \value DeleteRepositoryPolicyAction Ecr DeleteRepositoryPolicy action.
 * \value DescribeImageReplicationStatusAction Ecr DescribeImageReplicationStatus action.
 * \value DescribeImageScanFindingsAction Ecr DescribeImageScanFindings action.
 * \value DescribeImagesAction Ecr DescribeImages action.
 * \value DescribePullThroughCacheRulesAction Ecr DescribePullThroughCacheRules action.
 * \value DescribeRegistryAction Ecr DescribeRegistry action.
 * \value DescribeRepositoriesAction Ecr DescribeRepositories action.
 * \value GetAuthorizationTokenAction Ecr GetAuthorizationToken action.
 * \value GetDownloadUrlForLayerAction Ecr GetDownloadUrlForLayer action.
 * \value GetLifecyclePolicyAction Ecr GetLifecyclePolicy action.
 * \value GetLifecyclePolicyPreviewAction Ecr GetLifecyclePolicyPreview action.
 * \value GetRegistryPolicyAction Ecr GetRegistryPolicy action.
 * \value GetRegistryScanningConfigurationAction Ecr GetRegistryScanningConfiguration action.
 * \value GetRepositoryPolicyAction Ecr GetRepositoryPolicy action.
 * \value InitiateLayerUploadAction Ecr InitiateLayerUpload action.
 * \value ListImagesAction Ecr ListImages action.
 * \value ListTagsForResourceAction Ecr ListTagsForResource action.
 * \value PutImageAction Ecr PutImage action.
 * \value PutImageScanningConfigurationAction Ecr PutImageScanningConfiguration action.
 * \value PutImageTagMutabilityAction Ecr PutImageTagMutability action.
 * \value PutLifecyclePolicyAction Ecr PutLifecyclePolicy action.
 * \value PutRegistryPolicyAction Ecr PutRegistryPolicy action.
 * \value PutRegistryScanningConfigurationAction Ecr PutRegistryScanningConfiguration action.
 * \value PutReplicationConfigurationAction Ecr PutReplicationConfiguration action.
 * \value SetRepositoryPolicyAction Ecr SetRepositoryPolicy action.
 * \value StartImageScanAction Ecr StartImageScan action.
 * \value StartLifecyclePolicyPreviewAction Ecr StartLifecyclePolicyPreview action.
 * \value TagResourceAction Ecr TagResource action.
 * \value UntagResourceAction Ecr UntagResource action.
 * \value UploadLayerPartAction Ecr UploadLayerPart action.
 */

/*!
 * Constructs a EcrRequest object for Ecr \a action.
 */
EcrRequest::EcrRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EcrRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EcrRequest::EcrRequest(const EcrRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EcrRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EcrRequest object to be equal to \a other.
 */
EcrRequest& EcrRequest::operator=(const EcrRequest &other)
{
    Q_D(EcrRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EcrRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EcrRequestPrivate.
 */
EcrRequest::EcrRequest(EcrRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Ecr action to be performed by this request.
 */
EcrRequest::Action EcrRequest::action() const
{
    Q_D(const EcrRequest);
    return d->action;
}

/*!
 * Returns the name of the Ecr action to be performed by this request.
 */
QString EcrRequest::actionString() const
{
    return EcrRequestPrivate::toString(action());
}

/*!
 * Returns the Ecr API version implemented by this request.
 */
QString EcrRequest::apiVersion() const
{
    Q_D(const EcrRequest);
    return d->apiVersion;
}

/*!
 * Sets the Ecr action to be performed by this request to \a action.
 */
void EcrRequest::setAction(const Action action)
{
    Q_D(EcrRequest);
    d->action = action;
}

/*!
 * Sets the Ecr API version to include in this request to \a version.
 */
void EcrRequest::setApiVersion(const QString &version)
{
    Q_D(EcrRequest);
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
bool EcrRequest::operator==(const EcrRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Ecr queue name.
 *
 * @par From Ecr FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ecr queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EcrRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EcrRequest::clearParameter(const QString &name)
{
    Q_D(EcrRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EcrRequest::clearParameters()
{
    Q_D(EcrRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EcrRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EcrRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EcrRequest::parameters() const
{
    Q_D(const EcrRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EcrRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EcrRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EcrRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EcrRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Ecr request using the given
 * \a endpoint.
 *
 * This Ecr implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EcrRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EcrRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Ecr::EcrRequestPrivate
 * \brief The EcrRequestPrivate class provides private implementation for EcrRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a EcrRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
EcrRequestPrivate::EcrRequestPrivate(const EcrRequest::Action action, EcrRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-09-21"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EcrRequest class's copy constructor.
 */
EcrRequestPrivate::EcrRequestPrivate(const EcrRequestPrivate &other,
                                     EcrRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EcrRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Ecr service's Action
 * query parameters.
 */
QString EcrRequestPrivate::toString(const EcrRequest::Action &action)
{
    #define ActionToString(action) \
        case EcrRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchCheckLayerAvailability);
        ActionToString(BatchDeleteImage);
        ActionToString(BatchGetImage);
        ActionToString(BatchGetRepositoryScanningConfiguration);
        ActionToString(CompleteLayerUpload);
        ActionToString(CreatePullThroughCacheRule);
        ActionToString(CreateRepository);
        ActionToString(DeleteLifecyclePolicy);
        ActionToString(DeletePullThroughCacheRule);
        ActionToString(DeleteRegistryPolicy);
        ActionToString(DeleteRepository);
        ActionToString(DeleteRepositoryPolicy);
        ActionToString(DescribeImageReplicationStatus);
        ActionToString(DescribeImageScanFindings);
        ActionToString(DescribeImages);
        ActionToString(DescribePullThroughCacheRules);
        ActionToString(DescribeRegistry);
        ActionToString(DescribeRepositories);
        ActionToString(GetAuthorizationToken);
        ActionToString(GetDownloadUrlForLayer);
        ActionToString(GetLifecyclePolicy);
        ActionToString(GetLifecyclePolicyPreview);
        ActionToString(GetRegistryPolicy);
        ActionToString(GetRegistryScanningConfiguration);
        ActionToString(GetRepositoryPolicy);
        ActionToString(InitiateLayerUpload);
        ActionToString(ListImages);
        ActionToString(ListTagsForResource);
        ActionToString(PutImage);
        ActionToString(PutImageScanningConfiguration);
        ActionToString(PutImageTagMutability);
        ActionToString(PutLifecyclePolicy);
        ActionToString(PutRegistryPolicy);
        ActionToString(PutRegistryScanningConfiguration);
        ActionToString(PutReplicationConfiguration);
        ActionToString(SetRepositoryPolicy);
        ActionToString(StartImageScan);
        ActionToString(StartLifecyclePolicyPreview);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UploadLayerPart);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ecr
} // namespace QtAws
