// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "supportapprequest.h"
#include "supportapprequest_p.h"

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::SupportAppRequest
 * \brief The SupportAppRequest class provides an interface for SupportApp requests.
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * \enum SupportAppRequest::Action
 *
 * This enum describes the actions that can be performed as SupportApp
 * requests.
 *
 * \value CreateSlackChannelConfigurationAction SupportApp CreateSlackChannelConfiguration action.
 * \value DeleteAccountAliasAction SupportApp DeleteAccountAlias action.
 * \value DeleteSlackChannelConfigurationAction SupportApp DeleteSlackChannelConfiguration action.
 * \value DeleteSlackWorkspaceConfigurationAction SupportApp DeleteSlackWorkspaceConfiguration action.
 * \value GetAccountAliasAction SupportApp GetAccountAlias action.
 * \value ListSlackChannelConfigurationsAction SupportApp ListSlackChannelConfigurations action.
 * \value ListSlackWorkspaceConfigurationsAction SupportApp ListSlackWorkspaceConfigurations action.
 * \value PutAccountAliasAction SupportApp PutAccountAlias action.
 * \value UpdateSlackChannelConfigurationAction SupportApp UpdateSlackChannelConfiguration action.
 */

/*!
 * Constructs a SupportAppRequest object for SupportApp \a action.
 */
SupportAppRequest::SupportAppRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SupportAppRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SupportAppRequest::SupportAppRequest(const SupportAppRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SupportAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SupportAppRequest object to be equal to \a other.
 */
SupportAppRequest& SupportAppRequest::operator=(const SupportAppRequest &other)
{
    Q_D(SupportAppRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SupportAppRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SupportAppRequestPrivate.
 */
SupportAppRequest::SupportAppRequest(SupportAppRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SupportApp action to be performed by this request.
 */
SupportAppRequest::Action SupportAppRequest::action() const
{
    Q_D(const SupportAppRequest);
    return d->action;
}

/*!
 * Returns the name of the SupportApp action to be performed by this request.
 */
QString SupportAppRequest::actionString() const
{
    return SupportAppRequestPrivate::toString(action());
}

/*!
 * Returns the SupportApp API version implemented by this request.
 */
QString SupportAppRequest::apiVersion() const
{
    Q_D(const SupportAppRequest);
    return d->apiVersion;
}

/*!
 * Sets the SupportApp action to be performed by this request to \a action.
 */
void SupportAppRequest::setAction(const Action action)
{
    Q_D(SupportAppRequest);
    d->action = action;
}

/*!
 * Sets the SupportApp API version to include in this request to \a version.
 */
void SupportAppRequest::setApiVersion(const QString &version)
{
    Q_D(SupportAppRequest);
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
bool SupportAppRequest::operator==(const SupportAppRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SupportApp queue name.
 *
 * @par From SupportApp FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SupportApp queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SupportAppRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SupportAppRequest::clearParameter(const QString &name)
{
    Q_D(SupportAppRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SupportAppRequest::clearParameters()
{
    Q_D(SupportAppRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SupportAppRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SupportAppRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SupportAppRequest::parameters() const
{
    Q_D(const SupportAppRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SupportAppRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SupportAppRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SupportAppRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SupportAppRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SupportApp request using the given
 * \a endpoint.
 *
 * This SupportApp implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SupportAppRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SupportAppRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SupportApp::SupportAppRequestPrivate
 * \brief The SupportAppRequestPrivate class provides private implementation for SupportAppRequest.
 * \internal
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a SupportAppRequestPrivate object for SupportApp \a action,
 * with public implementation \a q.
 */
SupportAppRequestPrivate::SupportAppRequestPrivate(const SupportAppRequest::Action action, SupportAppRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-08-20"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SupportAppRequest class's copy constructor.
 */
SupportAppRequestPrivate::SupportAppRequestPrivate(const SupportAppRequestPrivate &other,
                                     SupportAppRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SupportAppRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SupportApp service's Action
 * query parameters.
 */
QString SupportAppRequestPrivate::toString(const SupportAppRequest::Action &action)
{
    #define ActionToString(action) \
        case SupportAppRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateSlackChannelConfiguration);
        ActionToString(DeleteAccountAlias);
        ActionToString(DeleteSlackChannelConfiguration);
        ActionToString(DeleteSlackWorkspaceConfiguration);
        ActionToString(GetAccountAlias);
        ActionToString(ListSlackChannelConfigurations);
        ActionToString(ListSlackWorkspaceConfigurations);
        ActionToString(PutAccountAlias);
        ActionToString(UpdateSlackChannelConfiguration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SupportApp
} // namespace QtAws
