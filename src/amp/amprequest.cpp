// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "amprequest.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::AmpRequest
 * \brief The AmpRequest class provides an interface for Amp requests.
 *
 * \inmodule QtAwsAmp
 */

/*!
 * \enum AmpRequest::Action
 *
 * This enum describes the actions that can be performed as Amp
 * requests.
 *
 * \value CreateAlertManagerDefinitionAction Amp CreateAlertManagerDefinition action.
 * \value CreateLoggingConfigurationAction Amp CreateLoggingConfiguration action.
 * \value CreateRuleGroupsNamespaceAction Amp CreateRuleGroupsNamespace action.
 * \value CreateWorkspaceAction Amp CreateWorkspace action.
 * \value DeleteAlertManagerDefinitionAction Amp DeleteAlertManagerDefinition action.
 * \value DeleteLoggingConfigurationAction Amp DeleteLoggingConfiguration action.
 * \value DeleteRuleGroupsNamespaceAction Amp DeleteRuleGroupsNamespace action.
 * \value DeleteWorkspaceAction Amp DeleteWorkspace action.
 * \value DescribeAlertManagerDefinitionAction Amp DescribeAlertManagerDefinition action.
 * \value DescribeLoggingConfigurationAction Amp DescribeLoggingConfiguration action.
 * \value DescribeRuleGroupsNamespaceAction Amp DescribeRuleGroupsNamespace action.
 * \value DescribeWorkspaceAction Amp DescribeWorkspace action.
 * \value ListRuleGroupsNamespacesAction Amp ListRuleGroupsNamespaces action.
 * \value ListTagsForResourceAction Amp ListTagsForResource action.
 * \value ListWorkspacesAction Amp ListWorkspaces action.
 * \value PutAlertManagerDefinitionAction Amp PutAlertManagerDefinition action.
 * \value PutRuleGroupsNamespaceAction Amp PutRuleGroupsNamespace action.
 * \value TagResourceAction Amp TagResource action.
 * \value UntagResourceAction Amp UntagResource action.
 * \value UpdateLoggingConfigurationAction Amp UpdateLoggingConfiguration action.
 * \value UpdateWorkspaceAliasAction Amp UpdateWorkspaceAlias action.
 */

/*!
 * Constructs a AmpRequest object for Amp \a action.
 */
AmpRequest::AmpRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AmpRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AmpRequest::AmpRequest(const AmpRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AmpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AmpRequest object to be equal to \a other.
 */
AmpRequest& AmpRequest::operator=(const AmpRequest &other)
{
    Q_D(AmpRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AmpRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmpRequestPrivate.
 */
AmpRequest::AmpRequest(AmpRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Amp action to be performed by this request.
 */
AmpRequest::Action AmpRequest::action() const
{
    Q_D(const AmpRequest);
    return d->action;
}

/*!
 * Returns the name of the Amp action to be performed by this request.
 */
QString AmpRequest::actionString() const
{
    return AmpRequestPrivate::toString(action());
}

/*!
 * Returns the Amp API version implemented by this request.
 */
QString AmpRequest::apiVersion() const
{
    Q_D(const AmpRequest);
    return d->apiVersion;
}

/*!
 * Sets the Amp action to be performed by this request to \a action.
 */
void AmpRequest::setAction(const Action action)
{
    Q_D(AmpRequest);
    d->action = action;
}

/*!
 * Sets the Amp API version to include in this request to \a version.
 */
void AmpRequest::setApiVersion(const QString &version)
{
    Q_D(AmpRequest);
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
bool AmpRequest::operator==(const AmpRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Amp queue name.
 *
 * @par From Amp FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Amp queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AmpRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AmpRequest::clearParameter(const QString &name)
{
    Q_D(AmpRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AmpRequest::clearParameters()
{
    Q_D(AmpRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AmpRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AmpRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AmpRequest::parameters() const
{
    Q_D(const AmpRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AmpRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AmpRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AmpRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AmpRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Amp request using the given
 * \a endpoint.
 *
 * This Amp implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AmpRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AmpRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Amp::AmpRequestPrivate
 * \brief The AmpRequestPrivate class provides private implementation for AmpRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a AmpRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
AmpRequestPrivate::AmpRequestPrivate(const AmpRequest::Action action, AmpRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-08-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AmpRequest class's copy constructor.
 */
AmpRequestPrivate::AmpRequestPrivate(const AmpRequestPrivate &other,
                                     AmpRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AmpRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Amp service's Action
 * query parameters.
 */
QString AmpRequestPrivate::toString(const AmpRequest::Action &action)
{
    #define ActionToString(action) \
        case AmpRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAlertManagerDefinition);
        ActionToString(CreateLoggingConfiguration);
        ActionToString(CreateRuleGroupsNamespace);
        ActionToString(CreateWorkspace);
        ActionToString(DeleteAlertManagerDefinition);
        ActionToString(DeleteLoggingConfiguration);
        ActionToString(DeleteRuleGroupsNamespace);
        ActionToString(DeleteWorkspace);
        ActionToString(DescribeAlertManagerDefinition);
        ActionToString(DescribeLoggingConfiguration);
        ActionToString(DescribeRuleGroupsNamespace);
        ActionToString(DescribeWorkspace);
        ActionToString(ListRuleGroupsNamespaces);
        ActionToString(ListTagsForResource);
        ActionToString(ListWorkspaces);
        ActionToString(PutAlertManagerDefinition);
        ActionToString(PutRuleGroupsNamespace);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateLoggingConfiguration);
        ActionToString(UpdateWorkspaceAlias);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Amp
} // namespace QtAws
