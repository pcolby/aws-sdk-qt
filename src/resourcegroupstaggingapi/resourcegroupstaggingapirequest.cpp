/*
    Copyright 2013-2020 Paul Colby

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
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIRequest
 * \brief The ResourceGroupsTaggingAPIRequest class provides an interface for ResourceGroupsTaggingAPI requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * \enum ResourceGroupsTaggingAPIRequest::Action
 *
 * This enum describes the actions that can be performed as ResourceGroupsTaggingAPI
 * requests.
 *
 * \value GetResourcesAction ResourceGroupsTaggingAPI GetResources action.
 * \value GetTagKeysAction ResourceGroupsTaggingAPI GetTagKeys action.
 * \value GetTagValuesAction ResourceGroupsTaggingAPI GetTagValues action.
 * \value TagResourcesAction ResourceGroupsTaggingAPI TagResources action.
 * \value UntagResourcesAction ResourceGroupsTaggingAPI UntagResources action.
 */

/*!
 * Constructs a ResourceGroupsTaggingAPIRequest object for ResourceGroupsTaggingAPI \a action.
 */
ResourceGroupsTaggingAPIRequest::ResourceGroupsTaggingAPIRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsTaggingAPIRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ResourceGroupsTaggingAPIRequest::ResourceGroupsTaggingAPIRequest(const ResourceGroupsTaggingAPIRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsTaggingAPIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ResourceGroupsTaggingAPIRequest object to be equal to \a other.
 */
ResourceGroupsTaggingAPIRequest& ResourceGroupsTaggingAPIRequest::operator=(const ResourceGroupsTaggingAPIRequest &other)
{
    Q_D(ResourceGroupsTaggingAPIRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ResourceGroupsTaggingAPIRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsTaggingAPIRequestPrivate.
 */
ResourceGroupsTaggingAPIRequest::ResourceGroupsTaggingAPIRequest(ResourceGroupsTaggingAPIRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ResourceGroupsTaggingAPI action to be performed by this request.
 */
ResourceGroupsTaggingAPIRequest::Action ResourceGroupsTaggingAPIRequest::action() const
{
    Q_D(const ResourceGroupsTaggingAPIRequest);
    return d->action;
}

/*!
 * Returns the name of the ResourceGroupsTaggingAPI action to be performed by this request.
 */
QString ResourceGroupsTaggingAPIRequest::actionString() const
{
    return ResourceGroupsTaggingAPIRequestPrivate::toString(action());
}

/*!
 * Returns the ResourceGroupsTaggingAPI API version implemented by this request.
 */
QString ResourceGroupsTaggingAPIRequest::apiVersion() const
{
    Q_D(const ResourceGroupsTaggingAPIRequest);
    return d->apiVersion;
}

/*!
 * Sets the ResourceGroupsTaggingAPI action to be performed by this request to \a action.
 */
void ResourceGroupsTaggingAPIRequest::setAction(const Action action)
{
    Q_D(ResourceGroupsTaggingAPIRequest);
    d->action = action;
}

/*!
 * Sets the ResourceGroupsTaggingAPI API version to include in this request to \a version.
 */
void ResourceGroupsTaggingAPIRequest::setApiVersion(const QString &version)
{
    Q_D(ResourceGroupsTaggingAPIRequest);
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
bool ResourceGroupsTaggingAPIRequest::operator==(const ResourceGroupsTaggingAPIRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ResourceGroupsTaggingAPI queue name.
 *
 * @par From ResourceGroupsTaggingAPI FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ResourceGroupsTaggingAPI queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ResourceGroupsTaggingAPIRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ResourceGroupsTaggingAPIRequest::clearParameter(const QString &name)
{
    Q_D(ResourceGroupsTaggingAPIRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ResourceGroupsTaggingAPIRequest::clearParameters()
{
    Q_D(ResourceGroupsTaggingAPIRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ResourceGroupsTaggingAPIRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ResourceGroupsTaggingAPIRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ResourceGroupsTaggingAPIRequest::parameters() const
{
    Q_D(const ResourceGroupsTaggingAPIRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ResourceGroupsTaggingAPIRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ResourceGroupsTaggingAPIRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ResourceGroupsTaggingAPIRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ResourceGroupsTaggingAPIRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ResourceGroupsTaggingAPI request using the given
 * \a endpoint.
 *
 * This ResourceGroupsTaggingAPI implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ResourceGroupsTaggingAPIRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ResourceGroupsTaggingAPIRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIRequestPrivate
 * \brief The ResourceGroupsTaggingAPIRequestPrivate class provides private implementation for ResourceGroupsTaggingAPIRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a ResourceGroupsTaggingAPIRequestPrivate object for ResourceGroupsTaggingAPI \a action,
 * with public implementation \a q.
 */
ResourceGroupsTaggingAPIRequestPrivate::ResourceGroupsTaggingAPIRequestPrivate(const ResourceGroupsTaggingAPIRequest::Action action, ResourceGroupsTaggingAPIRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ResourceGroupsTaggingAPIRequest class's copy constructor.
 */
ResourceGroupsTaggingAPIRequestPrivate::ResourceGroupsTaggingAPIRequestPrivate(const ResourceGroupsTaggingAPIRequestPrivate &other,
                                     ResourceGroupsTaggingAPIRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ResourceGroupsTaggingAPIRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ResourceGroupsTaggingAPI service's Action
 * query parameters.
 */
QString ResourceGroupsTaggingAPIRequestPrivate::toString(const ResourceGroupsTaggingAPIRequest::Action &action)
{
    #define ActionToString(action) \
        case ResourceGroupsTaggingAPIRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
