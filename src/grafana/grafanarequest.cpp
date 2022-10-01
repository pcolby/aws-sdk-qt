// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "grafanarequest.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::GrafanaRequest
 * \brief The GrafanaRequest class provides an interface for Grafana requests.
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * \enum GrafanaRequest::Action
 *
 * This enum describes the actions that can be performed as Grafana
 * requests.
 *
 * \value AssociateLicenseAction Grafana AssociateLicense action.
 * \value CreateWorkspaceAction Grafana CreateWorkspace action.
 * \value CreateWorkspaceApiKeyAction Grafana CreateWorkspaceApiKey action.
 * \value DeleteWorkspaceAction Grafana DeleteWorkspace action.
 * \value DeleteWorkspaceApiKeyAction Grafana DeleteWorkspaceApiKey action.
 * \value DescribeWorkspaceAction Grafana DescribeWorkspace action.
 * \value DescribeWorkspaceAuthenticationAction Grafana DescribeWorkspaceAuthentication action.
 * \value DisassociateLicenseAction Grafana DisassociateLicense action.
 * \value ListPermissionsAction Grafana ListPermissions action.
 * \value ListTagsForResourceAction Grafana ListTagsForResource action.
 * \value ListWorkspacesAction Grafana ListWorkspaces action.
 * \value TagResourceAction Grafana TagResource action.
 * \value UntagResourceAction Grafana UntagResource action.
 * \value UpdatePermissionsAction Grafana UpdatePermissions action.
 * \value UpdateWorkspaceAction Grafana UpdateWorkspace action.
 * \value UpdateWorkspaceAuthenticationAction Grafana UpdateWorkspaceAuthentication action.
 */

/*!
 * Constructs a GrafanaRequest object for Grafana \a action.
 */
GrafanaRequest::GrafanaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GrafanaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GrafanaRequest::GrafanaRequest(const GrafanaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GrafanaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GrafanaRequest object to be equal to \a other.
 */
GrafanaRequest& GrafanaRequest::operator=(const GrafanaRequest &other)
{
    Q_D(GrafanaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GrafanaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GrafanaRequestPrivate.
 */
GrafanaRequest::GrafanaRequest(GrafanaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Grafana action to be performed by this request.
 */
GrafanaRequest::Action GrafanaRequest::action() const
{
    Q_D(const GrafanaRequest);
    return d->action;
}

/*!
 * Returns the name of the Grafana action to be performed by this request.
 */
QString GrafanaRequest::actionString() const
{
    return GrafanaRequestPrivate::toString(action());
}

/*!
 * Returns the Grafana API version implemented by this request.
 */
QString GrafanaRequest::apiVersion() const
{
    Q_D(const GrafanaRequest);
    return d->apiVersion;
}

/*!
 * Sets the Grafana action to be performed by this request to \a action.
 */
void GrafanaRequest::setAction(const Action action)
{
    Q_D(GrafanaRequest);
    d->action = action;
}

/*!
 * Sets the Grafana API version to include in this request to \a version.
 */
void GrafanaRequest::setApiVersion(const QString &version)
{
    Q_D(GrafanaRequest);
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
bool GrafanaRequest::operator==(const GrafanaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Grafana queue name.
 *
 * @par From Grafana FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Grafana queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GrafanaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GrafanaRequest::clearParameter(const QString &name)
{
    Q_D(GrafanaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GrafanaRequest::clearParameters()
{
    Q_D(GrafanaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GrafanaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GrafanaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GrafanaRequest::parameters() const
{
    Q_D(const GrafanaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GrafanaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GrafanaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GrafanaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GrafanaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Grafana request using the given
 * \a endpoint.
 *
 * This Grafana implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GrafanaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GrafanaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Grafana::GrafanaRequestPrivate
 * \brief The GrafanaRequestPrivate class provides private implementation for GrafanaRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a GrafanaRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
GrafanaRequestPrivate::GrafanaRequestPrivate(const GrafanaRequest::Action action, GrafanaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-08-18"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GrafanaRequest class's copy constructor.
 */
GrafanaRequestPrivate::GrafanaRequestPrivate(const GrafanaRequestPrivate &other,
                                     GrafanaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GrafanaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Grafana service's Action
 * query parameters.
 */
QString GrafanaRequestPrivate::toString(const GrafanaRequest::Action &action)
{
    #define ActionToString(action) \
        case GrafanaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateLicense);
        ActionToString(CreateWorkspace);
        ActionToString(CreateWorkspaceApiKey);
        ActionToString(DeleteWorkspace);
        ActionToString(DeleteWorkspaceApiKey);
        ActionToString(DescribeWorkspace);
        ActionToString(DescribeWorkspaceAuthentication);
        ActionToString(DisassociateLicense);
        ActionToString(ListPermissions);
        ActionToString(ListTagsForResource);
        ActionToString(ListWorkspaces);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdatePermissions);
        ActionToString(UpdateWorkspace);
        ActionToString(UpdateWorkspaceAuthentication);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Grafana
} // namespace QtAws
