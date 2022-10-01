// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "finspacedatarequest.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::FinspaceDataRequest
 * \brief The FinspaceDataRequest class provides an interface for FinspaceData requests.
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * \enum FinspaceDataRequest::Action
 *
 * This enum describes the actions that can be performed as FinspaceData
 * requests.
 *
 * \value AssociateUserToPermissionGroupAction FinspaceData AssociateUserToPermissionGroup action.
 * \value CreateChangesetAction FinspaceData CreateChangeset action.
 * \value CreateDataViewAction FinspaceData CreateDataView action.
 * \value CreateDatasetAction FinspaceData CreateDataset action.
 * \value CreatePermissionGroupAction FinspaceData CreatePermissionGroup action.
 * \value CreateUserAction FinspaceData CreateUser action.
 * \value DeleteDatasetAction FinspaceData DeleteDataset action.
 * \value DeletePermissionGroupAction FinspaceData DeletePermissionGroup action.
 * \value DisableUserAction FinspaceData DisableUser action.
 * \value DisassociateUserFromPermissionGroupAction FinspaceData DisassociateUserFromPermissionGroup action.
 * \value EnableUserAction FinspaceData EnableUser action.
 * \value GetChangesetAction FinspaceData GetChangeset action.
 * \value GetDataViewAction FinspaceData GetDataView action.
 * \value GetDatasetAction FinspaceData GetDataset action.
 * \value GetExternalDataViewAccessDetailsAction FinspaceData GetExternalDataViewAccessDetails action.
 * \value GetPermissionGroupAction FinspaceData GetPermissionGroup action.
 * \value GetProgrammaticAccessCredentialsAction FinspaceData GetProgrammaticAccessCredentials action.
 * \value GetUserAction FinspaceData GetUser action.
 * \value GetWorkingLocationAction FinspaceData GetWorkingLocation action.
 * \value ListChangesetsAction FinspaceData ListChangesets action.
 * \value ListDataViewsAction FinspaceData ListDataViews action.
 * \value ListDatasetsAction FinspaceData ListDatasets action.
 * \value ListPermissionGroupsAction FinspaceData ListPermissionGroups action.
 * \value ListPermissionGroupsByUserAction FinspaceData ListPermissionGroupsByUser action.
 * \value ListUsersAction FinspaceData ListUsers action.
 * \value ListUsersByPermissionGroupAction FinspaceData ListUsersByPermissionGroup action.
 * \value ResetUserPasswordAction FinspaceData ResetUserPassword action.
 * \value UpdateChangesetAction FinspaceData UpdateChangeset action.
 * \value UpdateDatasetAction FinspaceData UpdateDataset action.
 * \value UpdatePermissionGroupAction FinspaceData UpdatePermissionGroup action.
 * \value UpdateUserAction FinspaceData UpdateUser action.
 */

/*!
 * Constructs a FinspaceDataRequest object for FinspaceData \a action.
 */
FinspaceDataRequest::FinspaceDataRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new FinspaceDataRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FinspaceDataRequest::FinspaceDataRequest(const FinspaceDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(new FinspaceDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FinspaceDataRequest object to be equal to \a other.
 */
FinspaceDataRequest& FinspaceDataRequest::operator=(const FinspaceDataRequest &other)
{
    Q_D(FinspaceDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FinspaceDataRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinspaceDataRequestPrivate.
 */
FinspaceDataRequest::FinspaceDataRequest(FinspaceDataRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the FinspaceData action to be performed by this request.
 */
FinspaceDataRequest::Action FinspaceDataRequest::action() const
{
    Q_D(const FinspaceDataRequest);
    return d->action;
}

/*!
 * Returns the name of the FinspaceData action to be performed by this request.
 */
QString FinspaceDataRequest::actionString() const
{
    return FinspaceDataRequestPrivate::toString(action());
}

/*!
 * Returns the FinspaceData API version implemented by this request.
 */
QString FinspaceDataRequest::apiVersion() const
{
    Q_D(const FinspaceDataRequest);
    return d->apiVersion;
}

/*!
 * Sets the FinspaceData action to be performed by this request to \a action.
 */
void FinspaceDataRequest::setAction(const Action action)
{
    Q_D(FinspaceDataRequest);
    d->action = action;
}

/*!
 * Sets the FinspaceData API version to include in this request to \a version.
 */
void FinspaceDataRequest::setApiVersion(const QString &version)
{
    Q_D(FinspaceDataRequest);
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
bool FinspaceDataRequest::operator==(const FinspaceDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid FinspaceData queue name.
 *
 * @par From FinspaceData FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid FinspaceData queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FinspaceDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FinspaceDataRequest::clearParameter(const QString &name)
{
    Q_D(FinspaceDataRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FinspaceDataRequest::clearParameters()
{
    Q_D(FinspaceDataRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FinspaceDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FinspaceDataRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FinspaceDataRequest::parameters() const
{
    Q_D(const FinspaceDataRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FinspaceDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FinspaceDataRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FinspaceDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FinspaceDataRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the FinspaceData request using the given
 * \a endpoint.
 *
 * This FinspaceData implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FinspaceDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FinspaceDataRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::FinspaceData::FinspaceDataRequestPrivate
 * \brief The FinspaceDataRequestPrivate class provides private implementation for FinspaceDataRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a FinspaceDataRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
FinspaceDataRequestPrivate::FinspaceDataRequestPrivate(const FinspaceDataRequest::Action action, FinspaceDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-13"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FinspaceDataRequest class's copy constructor.
 */
FinspaceDataRequestPrivate::FinspaceDataRequestPrivate(const FinspaceDataRequestPrivate &other,
                                     FinspaceDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FinspaceDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the FinspaceData service's Action
 * query parameters.
 */
QString FinspaceDataRequestPrivate::toString(const FinspaceDataRequest::Action &action)
{
    #define ActionToString(action) \
        case FinspaceDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateUserToPermissionGroup);
        ActionToString(CreateChangeset);
        ActionToString(CreateDataView);
        ActionToString(CreateDataset);
        ActionToString(CreatePermissionGroup);
        ActionToString(CreateUser);
        ActionToString(DeleteDataset);
        ActionToString(DeletePermissionGroup);
        ActionToString(DisableUser);
        ActionToString(DisassociateUserFromPermissionGroup);
        ActionToString(EnableUser);
        ActionToString(GetChangeset);
        ActionToString(GetDataView);
        ActionToString(GetDataset);
        ActionToString(GetExternalDataViewAccessDetails);
        ActionToString(GetPermissionGroup);
        ActionToString(GetProgrammaticAccessCredentials);
        ActionToString(GetUser);
        ActionToString(GetWorkingLocation);
        ActionToString(ListChangesets);
        ActionToString(ListDataViews);
        ActionToString(ListDatasets);
        ActionToString(ListPermissionGroups);
        ActionToString(ListPermissionGroupsByUser);
        ActionToString(ListUsers);
        ActionToString(ListUsersByPermissionGroup);
        ActionToString(ResetUserPassword);
        ActionToString(UpdateChangeset);
        ActionToString(UpdateDataset);
        ActionToString(UpdatePermissionGroup);
        ActionToString(UpdateUser);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace FinspaceData
} // namespace QtAws
