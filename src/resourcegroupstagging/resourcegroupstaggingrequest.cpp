// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resourcegroupstaggingrequest.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::ResourceGroupsTaggingRequest
 * \brief The ResourceGroupsTaggingRequest class provides an interface for ResourceGroupsTagging requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * \enum ResourceGroupsTaggingRequest::Action
 *
 * This enum describes the actions that can be performed as ResourceGroupsTagging
 * requests.
 *
 * \value DescribeReportCreationAction ResourceGroupsTagging DescribeReportCreation action.
 * \value GetComplianceSummaryAction ResourceGroupsTagging GetComplianceSummary action.
 * \value GetResourcesAction ResourceGroupsTagging GetResources action.
 * \value GetTagKeysAction ResourceGroupsTagging GetTagKeys action.
 * \value GetTagValuesAction ResourceGroupsTagging GetTagValues action.
 * \value StartReportCreationAction ResourceGroupsTagging StartReportCreation action.
 * \value TagResourcesAction ResourceGroupsTagging TagResources action.
 * \value UntagResourcesAction ResourceGroupsTagging UntagResources action.
 */

/*!
 * Constructs a ResourceGroupsTaggingRequest object for ResourceGroupsTagging \a action.
 */
ResourceGroupsTaggingRequest::ResourceGroupsTaggingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsTaggingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ResourceGroupsTaggingRequest::ResourceGroupsTaggingRequest(const ResourceGroupsTaggingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ResourceGroupsTaggingRequest object to be equal to \a other.
 */
ResourceGroupsTaggingRequest& ResourceGroupsTaggingRequest::operator=(const ResourceGroupsTaggingRequest &other)
{
    Q_D(ResourceGroupsTaggingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ResourceGroupsTaggingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsTaggingRequestPrivate.
 */
ResourceGroupsTaggingRequest::ResourceGroupsTaggingRequest(ResourceGroupsTaggingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ResourceGroupsTagging action to be performed by this request.
 */
ResourceGroupsTaggingRequest::Action ResourceGroupsTaggingRequest::action() const
{
    Q_D(const ResourceGroupsTaggingRequest);
    return d->action;
}

/*!
 * Returns the name of the ResourceGroupsTagging action to be performed by this request.
 */
QString ResourceGroupsTaggingRequest::actionString() const
{
    return ResourceGroupsTaggingRequestPrivate::toString(action());
}

/*!
 * Returns the ResourceGroupsTagging API version implemented by this request.
 */
QString ResourceGroupsTaggingRequest::apiVersion() const
{
    Q_D(const ResourceGroupsTaggingRequest);
    return d->apiVersion;
}

/*!
 * Sets the ResourceGroupsTagging action to be performed by this request to \a action.
 */
void ResourceGroupsTaggingRequest::setAction(const Action action)
{
    Q_D(ResourceGroupsTaggingRequest);
    d->action = action;
}

/*!
 * Sets the ResourceGroupsTagging API version to include in this request to \a version.
 */
void ResourceGroupsTaggingRequest::setApiVersion(const QString &version)
{
    Q_D(ResourceGroupsTaggingRequest);
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
bool ResourceGroupsTaggingRequest::operator==(const ResourceGroupsTaggingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ResourceGroupsTagging queue name.
 *
 * @par From ResourceGroupsTagging FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ResourceGroupsTagging queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ResourceGroupsTaggingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ResourceGroupsTaggingRequest::clearParameter(const QString &name)
{
    Q_D(ResourceGroupsTaggingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ResourceGroupsTaggingRequest::clearParameters()
{
    Q_D(ResourceGroupsTaggingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ResourceGroupsTaggingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ResourceGroupsTaggingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ResourceGroupsTaggingRequest::parameters() const
{
    Q_D(const ResourceGroupsTaggingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ResourceGroupsTaggingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ResourceGroupsTaggingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ResourceGroupsTaggingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ResourceGroupsTaggingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ResourceGroupsTagging request using the given
 * \a endpoint.
 *
 * This ResourceGroupsTagging implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ResourceGroupsTaggingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ResourceGroupsTaggingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ResourceGroupsTagging::ResourceGroupsTaggingRequestPrivate
 * \brief The ResourceGroupsTaggingRequestPrivate class provides private implementation for ResourceGroupsTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a ResourceGroupsTaggingRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
ResourceGroupsTaggingRequestPrivate::ResourceGroupsTaggingRequestPrivate(const ResourceGroupsTaggingRequest::Action action, ResourceGroupsTaggingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-01-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ResourceGroupsTaggingRequest class's copy constructor.
 */
ResourceGroupsTaggingRequestPrivate::ResourceGroupsTaggingRequestPrivate(const ResourceGroupsTaggingRequestPrivate &other,
                                     ResourceGroupsTaggingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ResourceGroupsTaggingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ResourceGroupsTagging service's Action
 * query parameters.
 */
QString ResourceGroupsTaggingRequestPrivate::toString(const ResourceGroupsTaggingRequest::Action &action)
{
    #define ActionToString(action) \
        case ResourceGroupsTaggingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DescribeReportCreation);
        ActionToString(GetComplianceSummary);
        ActionToString(GetResources);
        ActionToString(GetTagKeys);
        ActionToString(GetTagValues);
        ActionToString(StartReportCreation);
        ActionToString(TagResources);
        ActionToString(UntagResources);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
