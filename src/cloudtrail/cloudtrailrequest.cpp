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

#include "cloudtrailrequest.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CloudTrailRequest
 * \brief The CloudTrailRequest class provides an interface for CloudTrail requests.
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * \enum CloudTrailRequest::Action
 *
 * This enum describes the actions that can be performed as CloudTrail
 * requests.
 *
 * \value AddTagsAction CloudTrail AddTags action.
 * \value CreateTrailAction CloudTrail CreateTrail action.
 * \value DeleteTrailAction CloudTrail DeleteTrail action.
 * \value DescribeTrailsAction CloudTrail DescribeTrails action.
 * \value GetEventSelectorsAction CloudTrail GetEventSelectors action.
 * \value GetTrailStatusAction CloudTrail GetTrailStatus action.
 * \value ListPublicKeysAction CloudTrail ListPublicKeys action.
 * \value ListTagsAction CloudTrail ListTags action.
 * \value LookupEventsAction CloudTrail LookupEvents action.
 * \value PutEventSelectorsAction CloudTrail PutEventSelectors action.
 * \value RemoveTagsAction CloudTrail RemoveTags action.
 * \value StartLoggingAction CloudTrail StartLogging action.
 * \value StopLoggingAction CloudTrail StopLogging action.
 * \value UpdateTrailAction CloudTrail UpdateTrail action.
 */

/*!
 * Constructs a CloudTrailRequest object for CloudTrail \a action.
 */
CloudTrailRequest::CloudTrailRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudTrailRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudTrailRequest::CloudTrailRequest(const CloudTrailRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudTrailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudTrailRequest object to be equal to \a other.
 */
CloudTrailRequest& CloudTrailRequest::operator=(const CloudTrailRequest &other)
{
    Q_D(CloudTrailRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudTrailRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudTrailRequestPrivate.
 */
CloudTrailRequest::CloudTrailRequest(CloudTrailRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudTrail action to be performed by this request.
 */
CloudTrailRequest::Action CloudTrailRequest::action() const
{
    Q_D(const CloudTrailRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudTrail action to be performed by this request.
 */
QString CloudTrailRequest::actionString() const
{
    return CloudTrailRequestPrivate::toString(action());
}

/*!
 * Returns the CloudTrail API version implemented by this request.
 */
QString CloudTrailRequest::apiVersion() const
{
    Q_D(const CloudTrailRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudTrail action to be performed by this request to \a action.
 */
void CloudTrailRequest::setAction(const Action action)
{
    Q_D(CloudTrailRequest);
    d->action = action;
}

/*!
 * Sets the CloudTrail API version to include in this request to \a version.
 */
void CloudTrailRequest::setApiVersion(const QString &version)
{
    Q_D(CloudTrailRequest);
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
bool CloudTrailRequest::operator==(const CloudTrailRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudTrail queue name.
 *
 * @par From CloudTrail FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudTrail queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudTrailRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudTrailRequest::clearParameter(const QString &name)
{
    Q_D(CloudTrailRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudTrailRequest::clearParameters()
{
    Q_D(CloudTrailRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudTrailRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudTrailRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudTrailRequest::parameters() const
{
    Q_D(const CloudTrailRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudTrailRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudTrailRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudTrailRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudTrailRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudTrail request using the given
 * \a endpoint.
 *
 * This CloudTrail implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudTrailRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudTrailRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudTrail::CloudTrailRequestPrivate
 * \brief The CloudTrailRequestPrivate class provides private implementation for CloudTrailRequest.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CloudTrailRequestPrivate object for CloudTrail \a action,
 * with public implementation \a q.
 */
CloudTrailRequestPrivate::CloudTrailRequestPrivate(const CloudTrailRequest::Action action, CloudTrailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudTrailRequest class's copy constructor.
 */
CloudTrailRequestPrivate::CloudTrailRequestPrivate(const CloudTrailRequestPrivate &other,
                                     CloudTrailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudTrailRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudTrail service's Action
 * query parameters.
 */
QString CloudTrailRequestPrivate::toString(const CloudTrailRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudTrailRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudTrail
} // namespace QtAws
