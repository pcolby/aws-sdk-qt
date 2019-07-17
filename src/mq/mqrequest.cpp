/*
    Copyright 2013-2019 Paul Colby

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

#include "mqrequest.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::MqRequest
 * \brief The MqRequest class provides an interface for MQ requests.
 *
 * \inmodule QtAwsMQ
 */

/*!
 * \enum MqRequest::Action
 *
 * This enum describes the actions that can be performed as MQ
 * requests.
 *
 * \value CreateBrokerAction MQ CreateBroker action.
 * \value CreateConfigurationAction MQ CreateConfiguration action.
 * \value CreateTagsAction MQ CreateTags action.
 * \value CreateUserAction MQ CreateUser action.
 * \value DeleteBrokerAction MQ DeleteBroker action.
 * \value DeleteTagsAction MQ DeleteTags action.
 * \value DeleteUserAction MQ DeleteUser action.
 * \value DescribeBrokerAction MQ DescribeBroker action.
 * \value DescribeConfigurationAction MQ DescribeConfiguration action.
 * \value DescribeConfigurationRevisionAction MQ DescribeConfigurationRevision action.
 * \value DescribeUserAction MQ DescribeUser action.
 * \value ListBrokersAction MQ ListBrokers action.
 * \value ListConfigurationRevisionsAction MQ ListConfigurationRevisions action.
 * \value ListConfigurationsAction MQ ListConfigurations action.
 * \value ListTagsAction MQ ListTags action.
 * \value ListUsersAction MQ ListUsers action.
 * \value RebootBrokerAction MQ RebootBroker action.
 * \value UpdateBrokerAction MQ UpdateBroker action.
 * \value UpdateConfigurationAction MQ UpdateConfiguration action.
 * \value UpdateUserAction MQ UpdateUser action.
 */

/*!
 * Constructs a MqRequest object for MQ \a action.
 */
MqRequest::MqRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MqRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MqRequest::MqRequest(const MqRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MqRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MqRequest object to be equal to \a other.
 */
MqRequest& MqRequest::operator=(const MqRequest &other)
{
    Q_D(MqRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MqRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MqRequestPrivate.
 */
MqRequest::MqRequest(MqRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MQ action to be performed by this request.
 */
MqRequest::Action MqRequest::action() const
{
    Q_D(const MqRequest);
    return d->action;
}

/*!
 * Returns the name of the MQ action to be performed by this request.
 */
QString MqRequest::actionString() const
{
    return MqRequestPrivate::toString(action());
}

/*!
 * Returns the MQ API version implemented by this request.
 */
QString MqRequest::apiVersion() const
{
    Q_D(const MqRequest);
    return d->apiVersion;
}

/*!
 * Sets the MQ action to be performed by this request to \a action.
 */
void MqRequest::setAction(const Action action)
{
    Q_D(MqRequest);
    d->action = action;
}

/*!
 * Sets the MQ API version to include in this request to \a version.
 */
void MqRequest::setApiVersion(const QString &version)
{
    Q_D(MqRequest);
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
bool MqRequest::operator==(const MqRequest &other) const
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
/*bool MqRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MqRequest::clearParameter(const QString &name)
{
    Q_D(MqRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MqRequest::clearParameters()
{
    Q_D(MqRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MqRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MqRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MqRequest::parameters() const
{
    Q_D(const MqRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MqRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MqRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MqRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MqRequest);
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
QNetworkRequest MqRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MqRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MQ::MqRequestPrivate
 * \brief The MqRequestPrivate class provides private implementation for MqRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a MqRequestPrivate object for MQ \a action,
 * with public implementation \a q.
 */
MqRequestPrivate::MqRequestPrivate(const MqRequest::Action action, MqRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MqRequest class's copy constructor.
 */
MqRequestPrivate::MqRequestPrivate(const MqRequestPrivate &other,
                                     MqRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MqRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MQ service's Action
 * query parameters.
 */
QString MqRequestPrivate::toString(const MqRequest::Action &action)
{
    #define ActionToString(action) \
        case MqRequest::action##Action: return QStringLiteral(#action)
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
