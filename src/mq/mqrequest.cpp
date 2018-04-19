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

#include "mqrequest.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::MQRequest
 * \brief The MQRequest class provides an interface for MQ requests.
 *
 * \inmodule QtAwsMQ
 */

/*!
 * \enum MQRequest::Action
 *
 * This enum describes the actions that can be performed as MQ
 * requests.
 *
 * \value CreateBrokerAction MQ CreateBroker action.
 * \value CreateConfigurationAction MQ CreateConfiguration action.
 * \value CreateUserAction MQ CreateUser action.
 * \value DeleteBrokerAction MQ DeleteBroker action.
 * \value DeleteUserAction MQ DeleteUser action.
 * \value DescribeBrokerAction MQ DescribeBroker action.
 * \value DescribeConfigurationAction MQ DescribeConfiguration action.
 * \value DescribeConfigurationRevisionAction MQ DescribeConfigurationRevision action.
 * \value DescribeUserAction MQ DescribeUser action.
 * \value ListBrokersAction MQ ListBrokers action.
 * \value ListConfigurationRevisionsAction MQ ListConfigurationRevisions action.
 * \value ListConfigurationsAction MQ ListConfigurations action.
 * \value ListUsersAction MQ ListUsers action.
 * \value RebootBrokerAction MQ RebootBroker action.
 * \value UpdateBrokerAction MQ UpdateBroker action.
 * \value UpdateConfigurationAction MQ UpdateConfiguration action.
 * \value UpdateUserAction MQ UpdateUser action.
 */

/*!
 * Constructs a[n] MQRequest object for MQ \a action.
 */
MQRequest::MQRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MQRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MQRequest::MQRequest(const MQRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MQRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MQRequest object to be equal to \a other.
 */
MQRequest& MQRequest::operator=(const MQRequest &other)
{
    Q_D(MQRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MQRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MQRequestPrivate.
 */
MQRequest::MQRequest(MQRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MQ action to be performed by this request.
 */
MQRequest::Action MQRequest::action() const
{
    Q_D(const MQRequest);
    return d->action;
}

/*!
 * Returns the name of the MQ action to be performed by this request.
 */
QString MQRequest::actionString() const
{
    return MQRequestPrivate::toString(action());
}

/*!
 * Returns the MQ API version implemented by this request.
 */
QString MQRequest::apiVersion() const
{
    Q_D(const MQRequest);
    return d->apiVersion;
}

/*!
 * Sets the MQ action to be performed by this request to \a action.
 */
void MQRequest::setAction(const Action action)
{
    Q_D(MQRequest);
    d->action = action;
}

/*!
 * Sets the MQ API version to include in this request to \a version.
 */
void MQRequest::setApiVersion(const QString &version)
{
    Q_D(MQRequest);
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
bool MQRequest::operator==(const MQRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MQ queue name.
 *
 * @par From MQ FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MQ queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MQRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MQRequest::clearParameter(const QString &name)
{
    Q_D(MQRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MQRequest::clearParameters()
{
    Q_D(MQRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MQRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MQRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MQRequest::parameters() const
{
    Q_D(const MQRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MQRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MQRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MQRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MQRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MQ request using the given
 * \a endpoint.
 *
 * This MQ implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MQRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const MQRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MQ::MQRequestPrivate
 * \brief The MQRequestPrivate class provides private implementation for MQRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a MQRequestPrivate object for MQ \a action with,
 * public implementation \a q.
 */
MQRequestPrivate::MQRequestPrivate(const MQRequest::Action action, MQRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MQRequest class's copy constructor.
 */
MQRequestPrivate::MQRequestPrivate(const MQRequestPrivate &other,
                                     MQRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MQRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MQ service's Action
 * query parameters.
 */
QString MQRequestPrivate::toString(const MQRequest::Action &action)
{
    #define ActionToString(action) \
        case MQRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MQ
} // namespace QtAws
