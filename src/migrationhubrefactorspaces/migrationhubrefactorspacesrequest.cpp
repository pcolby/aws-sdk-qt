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

#include "migrationhubrefactorspacesrequest.h"
#include "migrationhubrefactorspacesrequest_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesRequest
 * \brief The MigrationHubRefactorSpacesRequest class provides an interface for MigrationHubRefactorSpaces requests.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * \enum MigrationHubRefactorSpacesRequest::Action
 *
 * This enum describes the actions that can be performed as MigrationHubRefactorSpaces
 * requests.
 *
 * \value CreateApplicationAction MigrationHubRefactorSpaces CreateApplication action.
 * \value CreateEnvironmentAction MigrationHubRefactorSpaces CreateEnvironment action.
 * \value CreateRouteAction MigrationHubRefactorSpaces CreateRoute action.
 * \value CreateServiceAction MigrationHubRefactorSpaces CreateService action.
 * \value DeleteApplicationAction MigrationHubRefactorSpaces DeleteApplication action.
 * \value DeleteEnvironmentAction MigrationHubRefactorSpaces DeleteEnvironment action.
 * \value DeleteResourcePolicyAction MigrationHubRefactorSpaces DeleteResourcePolicy action.
 * \value DeleteRouteAction MigrationHubRefactorSpaces DeleteRoute action.
 * \value DeleteServiceAction MigrationHubRefactorSpaces DeleteService action.
 * \value GetApplicationAction MigrationHubRefactorSpaces GetApplication action.
 * \value GetEnvironmentAction MigrationHubRefactorSpaces GetEnvironment action.
 * \value GetResourcePolicyAction MigrationHubRefactorSpaces GetResourcePolicy action.
 * \value GetRouteAction MigrationHubRefactorSpaces GetRoute action.
 * \value GetServiceAction MigrationHubRefactorSpaces GetService action.
 * \value ListApplicationsAction MigrationHubRefactorSpaces ListApplications action.
 * \value ListEnvironmentVpcsAction MigrationHubRefactorSpaces ListEnvironmentVpcs action.
 * \value ListEnvironmentsAction MigrationHubRefactorSpaces ListEnvironments action.
 * \value ListRoutesAction MigrationHubRefactorSpaces ListRoutes action.
 * \value ListServicesAction MigrationHubRefactorSpaces ListServices action.
 * \value ListTagsForResourceAction MigrationHubRefactorSpaces ListTagsForResource action.
 * \value PutResourcePolicyAction MigrationHubRefactorSpaces PutResourcePolicy action.
 * \value TagResourceAction MigrationHubRefactorSpaces TagResource action.
 * \value UntagResourceAction MigrationHubRefactorSpaces UntagResource action.
 * \value UpdateRouteAction MigrationHubRefactorSpaces UpdateRoute action.
 */

/*!
 * Constructs a MigrationHubRefactorSpacesRequest object for MigrationHubRefactorSpaces \a action.
 */
MigrationHubRefactorSpacesRequest::MigrationHubRefactorSpacesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubRefactorSpacesRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MigrationHubRefactorSpacesRequest::MigrationHubRefactorSpacesRequest(const MigrationHubRefactorSpacesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubRefactorSpacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MigrationHubRefactorSpacesRequest object to be equal to \a other.
 */
MigrationHubRefactorSpacesRequest& MigrationHubRefactorSpacesRequest::operator=(const MigrationHubRefactorSpacesRequest &other)
{
    Q_D(MigrationHubRefactorSpacesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MigrationHubRefactorSpacesRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubRefactorSpacesRequestPrivate.
 */
MigrationHubRefactorSpacesRequest::MigrationHubRefactorSpacesRequest(MigrationHubRefactorSpacesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MigrationHubRefactorSpaces action to be performed by this request.
 */
MigrationHubRefactorSpacesRequest::Action MigrationHubRefactorSpacesRequest::action() const
{
    Q_D(const MigrationHubRefactorSpacesRequest);
    return d->action;
}

/*!
 * Returns the name of the MigrationHubRefactorSpaces action to be performed by this request.
 */
QString MigrationHubRefactorSpacesRequest::actionString() const
{
    return MigrationHubRefactorSpacesRequestPrivate::toString(action());
}

/*!
 * Returns the MigrationHubRefactorSpaces API version implemented by this request.
 */
QString MigrationHubRefactorSpacesRequest::apiVersion() const
{
    Q_D(const MigrationHubRefactorSpacesRequest);
    return d->apiVersion;
}

/*!
 * Sets the MigrationHubRefactorSpaces action to be performed by this request to \a action.
 */
void MigrationHubRefactorSpacesRequest::setAction(const Action action)
{
    Q_D(MigrationHubRefactorSpacesRequest);
    d->action = action;
}

/*!
 * Sets the MigrationHubRefactorSpaces API version to include in this request to \a version.
 */
void MigrationHubRefactorSpacesRequest::setApiVersion(const QString &version)
{
    Q_D(MigrationHubRefactorSpacesRequest);
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
bool MigrationHubRefactorSpacesRequest::operator==(const MigrationHubRefactorSpacesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MigrationHubRefactorSpaces queue name.
 *
 * @par From MigrationHubRefactorSpaces FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MigrationHubRefactorSpaces queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MigrationHubRefactorSpacesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MigrationHubRefactorSpacesRequest::clearParameter(const QString &name)
{
    Q_D(MigrationHubRefactorSpacesRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MigrationHubRefactorSpacesRequest::clearParameters()
{
    Q_D(MigrationHubRefactorSpacesRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MigrationHubRefactorSpacesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MigrationHubRefactorSpacesRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MigrationHubRefactorSpacesRequest::parameters() const
{
    Q_D(const MigrationHubRefactorSpacesRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MigrationHubRefactorSpacesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MigrationHubRefactorSpacesRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MigrationHubRefactorSpacesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MigrationHubRefactorSpacesRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MigrationHubRefactorSpaces request using the given
 * \a endpoint.
 *
 * This MigrationHubRefactorSpaces implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MigrationHubRefactorSpacesRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MigrationHubRefactorSpacesRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesRequestPrivate
 * \brief The MigrationHubRefactorSpacesRequestPrivate class provides private implementation for MigrationHubRefactorSpacesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a MigrationHubRefactorSpacesRequestPrivate object for MigrationHubRefactorSpaces \a action,
 * with public implementation \a q.
 */
MigrationHubRefactorSpacesRequestPrivate::MigrationHubRefactorSpacesRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action, MigrationHubRefactorSpacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-10-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MigrationHubRefactorSpacesRequest class's copy constructor.
 */
MigrationHubRefactorSpacesRequestPrivate::MigrationHubRefactorSpacesRequestPrivate(const MigrationHubRefactorSpacesRequestPrivate &other,
                                     MigrationHubRefactorSpacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MigrationHubRefactorSpacesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MigrationHubRefactorSpaces service's Action
 * query parameters.
 */
QString MigrationHubRefactorSpacesRequestPrivate::toString(const MigrationHubRefactorSpacesRequest::Action &action)
{
    #define ActionToString(action) \
        case MigrationHubRefactorSpacesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApplication);
        ActionToString(CreateEnvironment);
        ActionToString(CreateRoute);
        ActionToString(CreateService);
        ActionToString(DeleteApplication);
        ActionToString(DeleteEnvironment);
        ActionToString(DeleteResourcePolicy);
        ActionToString(DeleteRoute);
        ActionToString(DeleteService);
        ActionToString(GetApplication);
        ActionToString(GetEnvironment);
        ActionToString(GetResourcePolicy);
        ActionToString(GetRoute);
        ActionToString(GetService);
        ActionToString(ListApplications);
        ActionToString(ListEnvironmentVpcs);
        ActionToString(ListEnvironments);
        ActionToString(ListRoutes);
        ActionToString(ListServices);
        ActionToString(ListTagsForResource);
        ActionToString(PutResourcePolicy);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateRoute);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
