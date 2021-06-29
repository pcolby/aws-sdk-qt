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

#include "mediastorerequest.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::MediaStoreRequest
 * \brief The MediaStoreRequest class provides an interface for MediaStore requests.
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * \enum MediaStoreRequest::Action
 *
 * This enum describes the actions that can be performed as MediaStore
 * requests.
 *
 * \value CreateContainerAction MediaStore CreateContainer action.
 * \value DeleteContainerAction MediaStore DeleteContainer action.
 * \value DeleteContainerPolicyAction MediaStore DeleteContainerPolicy action.
 * \value DeleteCorsPolicyAction MediaStore DeleteCorsPolicy action.
 * \value DeleteLifecyclePolicyAction MediaStore DeleteLifecyclePolicy action.
 * \value DeleteMetricPolicyAction MediaStore DeleteMetricPolicy action.
 * \value DescribeContainerAction MediaStore DescribeContainer action.
 * \value GetContainerPolicyAction MediaStore GetContainerPolicy action.
 * \value GetCorsPolicyAction MediaStore GetCorsPolicy action.
 * \value GetLifecyclePolicyAction MediaStore GetLifecyclePolicy action.
 * \value GetMetricPolicyAction MediaStore GetMetricPolicy action.
 * \value ListContainersAction MediaStore ListContainers action.
 * \value ListTagsForResourceAction MediaStore ListTagsForResource action.
 * \value PutContainerPolicyAction MediaStore PutContainerPolicy action.
 * \value PutCorsPolicyAction MediaStore PutCorsPolicy action.
 * \value PutLifecyclePolicyAction MediaStore PutLifecyclePolicy action.
 * \value PutMetricPolicyAction MediaStore PutMetricPolicy action.
 * \value StartAccessLoggingAction MediaStore StartAccessLogging action.
 * \value StopAccessLoggingAction MediaStore StopAccessLogging action.
 * \value TagResourceAction MediaStore TagResource action.
 * \value UntagResourceAction MediaStore UntagResource action.
 */

/*!
 * Constructs a MediaStoreRequest object for MediaStore \a action.
 */
MediaStoreRequest::MediaStoreRequest(const Action action)
    : d_ptr(new MediaStoreRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaStoreRequest::MediaStoreRequest(const MediaStoreRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new MediaStoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaStoreRequest object to be equal to \a other.
 */
MediaStoreRequest& MediaStoreRequest::operator=(const MediaStoreRequest &other)
{
    Q_D(MediaStoreRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaStoreRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaStoreRequestPrivate.
 */
MediaStoreRequest::MediaStoreRequest(MediaStoreRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the MediaStore action to be performed by this request.
 */
MediaStoreRequest::Action MediaStoreRequest::action() const
{
    Q_D(const MediaStoreRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaStore action to be performed by this request.
 */
QString MediaStoreRequest::actionString() const
{
    return MediaStoreRequestPrivate::toString(action());
}

/*!
 * Returns the MediaStore API version implemented by this request.
 */
QString MediaStoreRequest::apiVersion() const
{
    Q_D(const MediaStoreRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaStore action to be performed by this request to \a action.
 */
void MediaStoreRequest::setAction(const Action action)
{
    Q_D(MediaStoreRequest);
    d->action = action;
}

/*!
 * Sets the MediaStore API version to include in this request to \a version.
 */
void MediaStoreRequest::setApiVersion(const QString &version)
{
    Q_D(MediaStoreRequest);
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
bool MediaStoreRequest::operator==(const MediaStoreRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaStore queue name.
 *
 * @par From MediaStore FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaStore queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaStoreRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaStoreRequest::clearParameter(const QString &name)
{
    Q_D(MediaStoreRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaStoreRequest::clearParameters()
{
    Q_D(MediaStoreRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaStoreRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaStoreRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaStoreRequest::parameters() const
{
    Q_D(const MediaStoreRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaStoreRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaStoreRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaStoreRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaStoreRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaStore request using the given
 * \a endpoint.
 *
 * This MediaStore implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaStoreRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaStoreRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaStore::MediaStoreRequestPrivate
 * \brief The MediaStoreRequestPrivate class provides private implementation for MediaStoreRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a MediaStoreRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
MediaStoreRequestPrivate::MediaStoreRequestPrivate(const MediaStoreRequest::Action action, MediaStoreRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaStoreRequest class's copy constructor.
 */
MediaStoreRequestPrivate::MediaStoreRequestPrivate(const MediaStoreRequestPrivate &other,
                                     MediaStoreRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaStoreRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaStore service's Action
 * query parameters.
 */
QString MediaStoreRequestPrivate::toString(const MediaStoreRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaStoreRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateContainer);
        ActionToString(DeleteContainer);
        ActionToString(DeleteContainerPolicy);
        ActionToString(DeleteCorsPolicy);
        ActionToString(DeleteLifecyclePolicy);
        ActionToString(DeleteMetricPolicy);
        ActionToString(DescribeContainer);
        ActionToString(GetContainerPolicy);
        ActionToString(GetCorsPolicy);
        ActionToString(GetLifecyclePolicy);
        ActionToString(GetMetricPolicy);
        ActionToString(ListContainers);
        ActionToString(ListTagsForResource);
        ActionToString(PutContainerPolicy);
        ActionToString(PutCorsPolicy);
        ActionToString(PutLifecyclePolicy);
        ActionToString(PutMetricPolicy);
        ActionToString(StartAccessLogging);
        ActionToString(StopAccessLogging);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaStore
} // namespace QtAws
