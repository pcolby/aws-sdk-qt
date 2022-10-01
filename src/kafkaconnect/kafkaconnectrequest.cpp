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

#include "kafkaconnectrequest.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::KafkaConnectRequest
 * \brief The KafkaConnectRequest class provides an interface for KafkaConnect requests.
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * \enum KafkaConnectRequest::Action
 *
 * This enum describes the actions that can be performed as KafkaConnect
 * requests.
 *
 * \value CreateConnectorAction KafkaConnect CreateConnector action.
 * \value CreateCustomPluginAction KafkaConnect CreateCustomPlugin action.
 * \value CreateWorkerConfigurationAction KafkaConnect CreateWorkerConfiguration action.
 * \value DeleteConnectorAction KafkaConnect DeleteConnector action.
 * \value DeleteCustomPluginAction KafkaConnect DeleteCustomPlugin action.
 * \value DescribeConnectorAction KafkaConnect DescribeConnector action.
 * \value DescribeCustomPluginAction KafkaConnect DescribeCustomPlugin action.
 * \value DescribeWorkerConfigurationAction KafkaConnect DescribeWorkerConfiguration action.
 * \value ListConnectorsAction KafkaConnect ListConnectors action.
 * \value ListCustomPluginsAction KafkaConnect ListCustomPlugins action.
 * \value ListWorkerConfigurationsAction KafkaConnect ListWorkerConfigurations action.
 * \value UpdateConnectorAction KafkaConnect UpdateConnector action.
 */

/*!
 * Constructs a KafkaConnectRequest object for KafkaConnect \a action.
 */
KafkaConnectRequest::KafkaConnectRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KafkaConnectRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KafkaConnectRequest::KafkaConnectRequest(const KafkaConnectRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KafkaConnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KafkaConnectRequest object to be equal to \a other.
 */
KafkaConnectRequest& KafkaConnectRequest::operator=(const KafkaConnectRequest &other)
{
    Q_D(KafkaConnectRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KafkaConnectRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KafkaConnectRequestPrivate.
 */
KafkaConnectRequest::KafkaConnectRequest(KafkaConnectRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the KafkaConnect action to be performed by this request.
 */
KafkaConnectRequest::Action KafkaConnectRequest::action() const
{
    Q_D(const KafkaConnectRequest);
    return d->action;
}

/*!
 * Returns the name of the KafkaConnect action to be performed by this request.
 */
QString KafkaConnectRequest::actionString() const
{
    return KafkaConnectRequestPrivate::toString(action());
}

/*!
 * Returns the KafkaConnect API version implemented by this request.
 */
QString KafkaConnectRequest::apiVersion() const
{
    Q_D(const KafkaConnectRequest);
    return d->apiVersion;
}

/*!
 * Sets the KafkaConnect action to be performed by this request to \a action.
 */
void KafkaConnectRequest::setAction(const Action action)
{
    Q_D(KafkaConnectRequest);
    d->action = action;
}

/*!
 * Sets the KafkaConnect API version to include in this request to \a version.
 */
void KafkaConnectRequest::setApiVersion(const QString &version)
{
    Q_D(KafkaConnectRequest);
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
bool KafkaConnectRequest::operator==(const KafkaConnectRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KafkaConnect queue name.
 *
 * @par From KafkaConnect FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KafkaConnect queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KafkaConnectRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KafkaConnectRequest::clearParameter(const QString &name)
{
    Q_D(KafkaConnectRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KafkaConnectRequest::clearParameters()
{
    Q_D(KafkaConnectRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KafkaConnectRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KafkaConnectRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KafkaConnectRequest::parameters() const
{
    Q_D(const KafkaConnectRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KafkaConnectRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KafkaConnectRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KafkaConnectRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KafkaConnectRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KafkaConnect request using the given
 * \a endpoint.
 *
 * This KafkaConnect implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KafkaConnectRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KafkaConnectRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KafkaConnect::KafkaConnectRequestPrivate
 * \brief The KafkaConnectRequestPrivate class provides private implementation for KafkaConnectRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a KafkaConnectRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
KafkaConnectRequestPrivate::KafkaConnectRequestPrivate(const KafkaConnectRequest::Action action, KafkaConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-09-14"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KafkaConnectRequest class's copy constructor.
 */
KafkaConnectRequestPrivate::KafkaConnectRequestPrivate(const KafkaConnectRequestPrivate &other,
                                     KafkaConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KafkaConnectRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KafkaConnect service's Action
 * query parameters.
 */
QString KafkaConnectRequestPrivate::toString(const KafkaConnectRequest::Action &action)
{
    #define ActionToString(action) \
        case KafkaConnectRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateConnector);
        ActionToString(CreateCustomPlugin);
        ActionToString(CreateWorkerConfiguration);
        ActionToString(DeleteConnector);
        ActionToString(DeleteCustomPlugin);
        ActionToString(DescribeConnector);
        ActionToString(DescribeCustomPlugin);
        ActionToString(DescribeWorkerConfiguration);
        ActionToString(ListConnectors);
        ActionToString(ListCustomPlugins);
        ActionToString(ListWorkerConfigurations);
        ActionToString(UpdateConnector);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KafkaConnect
} // namespace QtAws
