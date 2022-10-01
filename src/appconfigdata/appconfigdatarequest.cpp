// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appconfigdatarequest.h"
#include "appconfigdatarequest_p.h"

namespace QtAws {
namespace AppConfigData {

/*!
 * \class QtAws::AppConfigData::AppConfigDataRequest
 * \brief The AppConfigDataRequest class provides an interface for AppConfigData requests.
 *
 * \inmodule QtAwsAppConfigData
 */

/*!
 * \enum AppConfigDataRequest::Action
 *
 * This enum describes the actions that can be performed as AppConfigData
 * requests.
 *
 * \value GetLatestConfigurationAction AppConfigData GetLatestConfiguration action.
 * \value StartConfigurationSessionAction AppConfigData StartConfigurationSession action.
 */

/*!
 * Constructs a AppConfigDataRequest object for AppConfigData \a action.
 */
AppConfigDataRequest::AppConfigDataRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppConfigDataRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppConfigDataRequest::AppConfigDataRequest(const AppConfigDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppConfigDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppConfigDataRequest object to be equal to \a other.
 */
AppConfigDataRequest& AppConfigDataRequest::operator=(const AppConfigDataRequest &other)
{
    Q_D(AppConfigDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppConfigDataRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppConfigDataRequestPrivate.
 */
AppConfigDataRequest::AppConfigDataRequest(AppConfigDataRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppConfigData action to be performed by this request.
 */
AppConfigDataRequest::Action AppConfigDataRequest::action() const
{
    Q_D(const AppConfigDataRequest);
    return d->action;
}

/*!
 * Returns the name of the AppConfigData action to be performed by this request.
 */
QString AppConfigDataRequest::actionString() const
{
    return AppConfigDataRequestPrivate::toString(action());
}

/*!
 * Returns the AppConfigData API version implemented by this request.
 */
QString AppConfigDataRequest::apiVersion() const
{
    Q_D(const AppConfigDataRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppConfigData action to be performed by this request to \a action.
 */
void AppConfigDataRequest::setAction(const Action action)
{
    Q_D(AppConfigDataRequest);
    d->action = action;
}

/*!
 * Sets the AppConfigData API version to include in this request to \a version.
 */
void AppConfigDataRequest::setApiVersion(const QString &version)
{
    Q_D(AppConfigDataRequest);
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
bool AppConfigDataRequest::operator==(const AppConfigDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppConfigData queue name.
 *
 * @par From AppConfigData FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppConfigData queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppConfigDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppConfigDataRequest::clearParameter(const QString &name)
{
    Q_D(AppConfigDataRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppConfigDataRequest::clearParameters()
{
    Q_D(AppConfigDataRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppConfigDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppConfigDataRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppConfigDataRequest::parameters() const
{
    Q_D(const AppConfigDataRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppConfigDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppConfigDataRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppConfigDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppConfigDataRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppConfigData request using the given
 * \a endpoint.
 *
 * This AppConfigData implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppConfigDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppConfigDataRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppConfigData::AppConfigDataRequestPrivate
 * \brief The AppConfigDataRequestPrivate class provides private implementation for AppConfigDataRequest.
 * \internal
 *
 * \inmodule QtAwsAppConfigData
 */

/*!
 * Constructs a AppConfigDataRequestPrivate object for AppConfigData \a action,
 * with public implementation \a q.
 */
AppConfigDataRequestPrivate::AppConfigDataRequestPrivate(const AppConfigDataRequest::Action action, AppConfigDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-11-11"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppConfigDataRequest class's copy constructor.
 */
AppConfigDataRequestPrivate::AppConfigDataRequestPrivate(const AppConfigDataRequestPrivate &other,
                                     AppConfigDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppConfigDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppConfigData service's Action
 * query parameters.
 */
QString AppConfigDataRequestPrivate::toString(const AppConfigDataRequest::Action &action)
{
    #define ActionToString(action) \
        case AppConfigDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetLatestConfiguration);
        ActionToString(StartConfigurationSession);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppConfigData
} // namespace QtAws
