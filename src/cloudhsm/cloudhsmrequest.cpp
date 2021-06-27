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

#include "cloudhsmrequest.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::CloudHSMRequest
 * \brief The CloudHSMRequest class provides an interface for CloudHSM requests.
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * \enum CloudHSMRequest::Action
 *
 * This enum describes the actions that can be performed as CloudHSM
 * requests.
 *
 * \value AddTagsToResourceAction CloudHSM AddTagsToResource action.
 * \value CreateHapgAction CloudHSM CreateHapg action.
 * \value CreateHsmAction CloudHSM CreateHsm action.
 * \value CreateLunaClientAction CloudHSM CreateLunaClient action.
 * \value DeleteHapgAction CloudHSM DeleteHapg action.
 * \value DeleteHsmAction CloudHSM DeleteHsm action.
 * \value DeleteLunaClientAction CloudHSM DeleteLunaClient action.
 * \value DescribeHapgAction CloudHSM DescribeHapg action.
 * \value DescribeHsmAction CloudHSM DescribeHsm action.
 * \value DescribeLunaClientAction CloudHSM DescribeLunaClient action.
 * \value GetConfigAction CloudHSM GetConfig action.
 * \value ListAvailableZonesAction CloudHSM ListAvailableZones action.
 * \value ListHapgsAction CloudHSM ListHapgs action.
 * \value ListHsmsAction CloudHSM ListHsms action.
 * \value ListLunaClientsAction CloudHSM ListLunaClients action.
 * \value ListTagsForResourceAction CloudHSM ListTagsForResource action.
 * \value ModifyHapgAction CloudHSM ModifyHapg action.
 * \value ModifyHsmAction CloudHSM ModifyHsm action.
 * \value ModifyLunaClientAction CloudHSM ModifyLunaClient action.
 * \value RemoveTagsFromResourceAction CloudHSM RemoveTagsFromResource action.
 */

/*!
 * Constructs a CloudHSMRequest object for CloudHSM \a action.
 */
CloudHSMRequest::CloudHSMRequest(const Action action)
    : d_ptr(new CloudHSMRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudHSMRequest::CloudHSMRequest(const CloudHSMRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new CloudHSMRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudHSMRequest object to be equal to \a other.
 */
CloudHSMRequest& CloudHSMRequest::operator=(const CloudHSMRequest &other)
{
    Q_D(CloudHSMRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudHSMRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHSMRequestPrivate.
 */
CloudHSMRequest::CloudHSMRequest(CloudHSMRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the CloudHSM action to be performed by this request.
 */
CloudHSMRequest::Action CloudHSMRequest::action() const
{
    Q_D(const CloudHSMRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudHSM action to be performed by this request.
 */
QString CloudHSMRequest::actionString() const
{
    return CloudHSMRequestPrivate::toString(action());
}

/*!
 * Returns the CloudHSM API version implemented by this request.
 */
QString CloudHSMRequest::apiVersion() const
{
    Q_D(const CloudHSMRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudHSM action to be performed by this request to \a action.
 */
void CloudHSMRequest::setAction(const Action action)
{
    Q_D(CloudHSMRequest);
    d->action = action;
}

/*!
 * Sets the CloudHSM API version to include in this request to \a version.
 */
void CloudHSMRequest::setApiVersion(const QString &version)
{
    Q_D(CloudHSMRequest);
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
bool CloudHSMRequest::operator==(const CloudHSMRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudHSM queue name.
 *
 * @par From CloudHSM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudHSM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudHSMRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudHSMRequest::clearParameter(const QString &name)
{
    Q_D(CloudHSMRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudHSMRequest::clearParameters()
{
    Q_D(CloudHSMRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudHSMRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudHSMRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudHSMRequest::parameters() const
{
    Q_D(const CloudHSMRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudHSMRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudHSMRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudHSMRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudHSMRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudHSM request using the given
 * \a endpoint.
 *
 * This CloudHSM implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudHSMRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudHSMRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudHSM::CloudHSMRequestPrivate
 * \brief The CloudHSMRequestPrivate class provides private implementation for CloudHSMRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a CloudHSMRequestPrivate object for CloudHSM \a action,
 * with public implementation \a q.
 */
CloudHSMRequestPrivate::CloudHSMRequestPrivate(const CloudHSMRequest::Action action, CloudHSMRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudHSMRequest class's copy constructor.
 */
CloudHSMRequestPrivate::CloudHSMRequestPrivate(const CloudHSMRequestPrivate &other,
                                     CloudHSMRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudHSMRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudHSM service's Action
 * query parameters.
 */
QString CloudHSMRequestPrivate::toString(const CloudHSMRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudHSMRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudHSM
} // namespace QtAws
