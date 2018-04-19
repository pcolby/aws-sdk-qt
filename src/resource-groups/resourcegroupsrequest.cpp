/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "resourcegroupsrequest.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/*!
 * \class QtAws::ResourceGroups::ResourceGroupsRequest
 * \brief The ResourceGroupsRequest class provides an interface for ResourceGroups requests.
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * \enum ResourceGroupsRequest::Action
 *
 * This enum describes the actions that can be performed as ResourceGroups
 * requests.
 *
 * \value CreateGroupAction ResourceGroups CreateGroup action.
 * \value DeleteGroupAction ResourceGroups DeleteGroup action.
 * \value GetGroupAction ResourceGroups GetGroup action.
 * \value GetGroupQueryAction ResourceGroups GetGroupQuery action.
 * \value GetTagsAction ResourceGroups GetTags action.
 * \value ListGroupResourcesAction ResourceGroups ListGroupResources action.
 * \value ListGroupsAction ResourceGroups ListGroups action.
 * \value SearchResourcesAction ResourceGroups SearchResources action.
 * \value TagAction ResourceGroups Tag action.
 * \value UntagAction ResourceGroups Untag action.
 * \value UpdateGroupAction ResourceGroups UpdateGroup action.
 * \value UpdateGroupQueryAction ResourceGroups UpdateGroupQuery action.
 */

/*!
 * Constructs a[n] ResourceGroupsRequest object for ResourceGroups \a action.
 */
ResourceGroupsRequest::ResourceGroupsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ResourceGroupsRequest::ResourceGroupsRequest(const ResourceGroupsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ResourceGroupsRequest object to be equal to \a other.
 */
ResourceGroupsRequest& ResourceGroupsRequest::operator=(const ResourceGroupsRequest &other)
{
    Q_D(ResourceGroupsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ResourceGroupsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsRequestPrivate.
 */
ResourceGroupsRequest::ResourceGroupsRequest(ResourceGroupsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ResourceGroups action to be performed by this request.
 */
ResourceGroupsRequest::Action ResourceGroupsRequest::action() const
{
    Q_D(const ResourceGroupsRequest);
    return d->action;
}

/*!
 * Returns the name of the ResourceGroups action to be performed by this request.
 */
QString ResourceGroupsRequest::actionString() const
{
    return ResourceGroupsRequestPrivate::toString(action());
}

/*!
 * Returns the ResourceGroups API version implemented by this request.
 */
QString ResourceGroupsRequest::apiVersion() const
{
    Q_D(const ResourceGroupsRequest);
    return d->apiVersion;
}

/*!
 * Sets the ResourceGroups action to be performed by this request to \a action.
 */
void ResourceGroupsRequest::setAction(const Action action)
{
    Q_D(ResourceGroupsRequest);
    d->action = action;
}

/*!
 * Sets the ResourceGroups API version to include in this request to \a version.
 */
void ResourceGroupsRequest::setApiVersion(const QString &version)
{
    Q_D(ResourceGroupsRequest);
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
bool ResourceGroupsRequest::operator==(const ResourceGroupsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ResourceGroups queue name.
 *
 * @par From ResourceGroups FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ResourceGroups queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ResourceGroupsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ResourceGroupsRequest::clearParameter(const QString &name)
{
    Q_D(ResourceGroupsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ResourceGroupsRequest::clearParameters()
{
    Q_D(ResourceGroupsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ResourceGroupsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ResourceGroupsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ResourceGroupsRequest::parameters() const
{
    Q_D(const ResourceGroupsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ResourceGroupsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ResourceGroupsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ResourceGroupsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ResourceGroupsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ResourceGroups request using the given
 * \a endpoint.
 *
 * This ResourceGroups implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ResourceGroupsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ResourceGroupsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ResourceGroups::ResourceGroupsRequestPrivate
 * \brief The ResourceGroupsRequestPrivate class provides private implementation for ResourceGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * Constructs a ResourceGroupsRequestPrivate object for ResourceGroups \a action with,
 * public implementation \a q.
 */
ResourceGroupsRequestPrivate::ResourceGroupsRequestPrivate(const ResourceGroupsRequest::Action action, ResourceGroupsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ResourceGroupsRequest class's copy constructor.
 */
ResourceGroupsRequestPrivate::ResourceGroupsRequestPrivate(const ResourceGroupsRequestPrivate &other,
                                     ResourceGroupsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ResourceGroupsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ResourceGroups service's Action
 * query parameters.
 */
QString ResourceGroupsRequestPrivate::toString(const ResourceGroupsRequest::Action &action)
{
    #define ActionToString(action) \
        case ResourceGroupsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ResourceGroups
} // namespace QtAws
