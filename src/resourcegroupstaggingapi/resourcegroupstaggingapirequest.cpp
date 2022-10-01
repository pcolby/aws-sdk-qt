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

#include "resourcegroupstaggingapirequest.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingApi {

/*!
 * \class QtAws::ResourceGroupsTaggingApi::ResourceGroupsTaggingApiRequest
 * \brief The ResourceGroupsTaggingApiRequest class provides an interface for ResourceGroupsTaggingApi requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * \enum ResourceGroupsTaggingApiRequest::Action
 *
 * This enum describes the actions that can be performed as ResourceGroupsTaggingApi
 * requests.
 *
 * \value DescribeReportCreationAction ResourceGroupsTaggingApi DescribeReportCreation action.
 * \value GetComplianceSummaryAction ResourceGroupsTaggingApi GetComplianceSummary action.
 * \value GetResourcesAction ResourceGroupsTaggingApi GetResources action.
 * \value GetTagKeysAction ResourceGroupsTaggingApi GetTagKeys action.
 * \value GetTagValuesAction ResourceGroupsTaggingApi GetTagValues action.
 * \value StartReportCreationAction ResourceGroupsTaggingApi StartReportCreation action.
 * \value TagResourcesAction ResourceGroupsTaggingApi TagResources action.
 * \value UntagResourcesAction ResourceGroupsTaggingApi UntagResources action.
 */

/*!
 * Constructs a ResourceGroupsTaggingApiRequest object for ResourceGroupsTaggingApi \a action.
 */
ResourceGroupsTaggingApiRequest::ResourceGroupsTaggingApiRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsTaggingApiRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ResourceGroupsTaggingApiRequest::ResourceGroupsTaggingApiRequest(const ResourceGroupsTaggingApiRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsTaggingApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ResourceGroupsTaggingApiRequest object to be equal to \a other.
 */
ResourceGroupsTaggingApiRequest& ResourceGroupsTaggingApiRequest::operator=(const ResourceGroupsTaggingApiRequest &other)
{
    Q_D(ResourceGroupsTaggingApiRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ResourceGroupsTaggingApiRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsTaggingApiRequestPrivate.
 */
ResourceGroupsTaggingApiRequest::ResourceGroupsTaggingApiRequest(ResourceGroupsTaggingApiRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ResourceGroupsTaggingApi action to be performed by this request.
 */
ResourceGroupsTaggingApiRequest::Action ResourceGroupsTaggingApiRequest::action() const
{
    Q_D(const ResourceGroupsTaggingApiRequest);
    return d->action;
}

/*!
 * Returns the name of the ResourceGroupsTaggingApi action to be performed by this request.
 */
QString ResourceGroupsTaggingApiRequest::actionString() const
{
    return ResourceGroupsTaggingApiRequestPrivate::toString(action());
}

/*!
 * Returns the ResourceGroupsTaggingApi API version implemented by this request.
 */
QString ResourceGroupsTaggingApiRequest::apiVersion() const
{
    Q_D(const ResourceGroupsTaggingApiRequest);
    return d->apiVersion;
}

/*!
 * Sets the ResourceGroupsTaggingApi action to be performed by this request to \a action.
 */
void ResourceGroupsTaggingApiRequest::setAction(const Action action)
{
    Q_D(ResourceGroupsTaggingApiRequest);
    d->action = action;
}

/*!
 * Sets the ResourceGroupsTaggingApi API version to include in this request to \a version.
 */
void ResourceGroupsTaggingApiRequest::setApiVersion(const QString &version)
{
    Q_D(ResourceGroupsTaggingApiRequest);
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
bool ResourceGroupsTaggingApiRequest::operator==(const ResourceGroupsTaggingApiRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ResourceGroupsTaggingApi queue name.
 *
 * @par From ResourceGroupsTaggingApi FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ResourceGroupsTaggingApi queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ResourceGroupsTaggingApiRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ResourceGroupsTaggingApiRequest::clearParameter(const QString &name)
{
    Q_D(ResourceGroupsTaggingApiRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ResourceGroupsTaggingApiRequest::clearParameters()
{
    Q_D(ResourceGroupsTaggingApiRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ResourceGroupsTaggingApiRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ResourceGroupsTaggingApiRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ResourceGroupsTaggingApiRequest::parameters() const
{
    Q_D(const ResourceGroupsTaggingApiRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ResourceGroupsTaggingApiRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ResourceGroupsTaggingApiRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ResourceGroupsTaggingApiRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ResourceGroupsTaggingApiRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ResourceGroupsTaggingApi request using the given
 * \a endpoint.
 *
 * This ResourceGroupsTaggingApi implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ResourceGroupsTaggingApiRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ResourceGroupsTaggingApiRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ResourceGroupsTaggingApi::ResourceGroupsTaggingApiRequestPrivate
 * \brief The ResourceGroupsTaggingApiRequestPrivate class provides private implementation for ResourceGroupsTaggingApiRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * Constructs a ResourceGroupsTaggingApiRequestPrivate object for ResourceGroupsTaggingApi \a action,
 * with public implementation \a q.
 */
ResourceGroupsTaggingApiRequestPrivate::ResourceGroupsTaggingApiRequestPrivate(const ResourceGroupsTaggingApiRequest::Action action, ResourceGroupsTaggingApiRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-01-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ResourceGroupsTaggingApiRequest class's copy constructor.
 */
ResourceGroupsTaggingApiRequestPrivate::ResourceGroupsTaggingApiRequestPrivate(const ResourceGroupsTaggingApiRequestPrivate &other,
                                     ResourceGroupsTaggingApiRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ResourceGroupsTaggingApiRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ResourceGroupsTaggingApi service's Action
 * query parameters.
 */
QString ResourceGroupsTaggingApiRequestPrivate::toString(const ResourceGroupsTaggingApiRequest::Action &action)
{
    #define ActionToString(action) \
        case ResourceGroupsTaggingApiRequest::action##Action: return QStringLiteral(#action)
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

} // namespace ResourceGroupsTaggingApi
} // namespace QtAws
