// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ramrequest.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::RamRequest
 * \brief The RamRequest class provides an interface for Ram requests.
 *
 * \inmodule QtAwsRam
 */

/*!
 * \enum RamRequest::Action
 *
 * This enum describes the actions that can be performed as Ram
 * requests.
 *
 * \value AcceptResourceShareInvitationAction Ram AcceptResourceShareInvitation action.
 * \value AssociateResourceShareAction Ram AssociateResourceShare action.
 * \value AssociateResourceSharePermissionAction Ram AssociateResourceSharePermission action.
 * \value CreateResourceShareAction Ram CreateResourceShare action.
 * \value DeleteResourceShareAction Ram DeleteResourceShare action.
 * \value DisassociateResourceShareAction Ram DisassociateResourceShare action.
 * \value DisassociateResourceSharePermissionAction Ram DisassociateResourceSharePermission action.
 * \value EnableSharingWithAwsOrganizationAction Ram EnableSharingWithAwsOrganization action.
 * \value GetPermissionAction Ram GetPermission action.
 * \value GetResourcePoliciesAction Ram GetResourcePolicies action.
 * \value GetResourceShareAssociationsAction Ram GetResourceShareAssociations action.
 * \value GetResourceShareInvitationsAction Ram GetResourceShareInvitations action.
 * \value GetResourceSharesAction Ram GetResourceShares action.
 * \value ListPendingInvitationResourcesAction Ram ListPendingInvitationResources action.
 * \value ListPermissionVersionsAction Ram ListPermissionVersions action.
 * \value ListPermissionsAction Ram ListPermissions action.
 * \value ListPrincipalsAction Ram ListPrincipals action.
 * \value ListResourceSharePermissionsAction Ram ListResourceSharePermissions action.
 * \value ListResourceTypesAction Ram ListResourceTypes action.
 * \value ListResourcesAction Ram ListResources action.
 * \value PromoteResourceShareCreatedFromPolicyAction Ram PromoteResourceShareCreatedFromPolicy action.
 * \value RejectResourceShareInvitationAction Ram RejectResourceShareInvitation action.
 * \value TagResourceAction Ram TagResource action.
 * \value UntagResourceAction Ram UntagResource action.
 * \value UpdateResourceShareAction Ram UpdateResourceShare action.
 */

/*!
 * Constructs a RamRequest object for Ram \a action.
 */
RamRequest::RamRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RamRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RamRequest::RamRequest(const RamRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RamRequest object to be equal to \a other.
 */
RamRequest& RamRequest::operator=(const RamRequest &other)
{
    Q_D(RamRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RamRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RamRequestPrivate.
 */
RamRequest::RamRequest(RamRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Ram action to be performed by this request.
 */
RamRequest::Action RamRequest::action() const
{
    Q_D(const RamRequest);
    return d->action;
}

/*!
 * Returns the name of the Ram action to be performed by this request.
 */
QString RamRequest::actionString() const
{
    return RamRequestPrivate::toString(action());
}

/*!
 * Returns the Ram API version implemented by this request.
 */
QString RamRequest::apiVersion() const
{
    Q_D(const RamRequest);
    return d->apiVersion;
}

/*!
 * Sets the Ram action to be performed by this request to \a action.
 */
void RamRequest::setAction(const Action action)
{
    Q_D(RamRequest);
    d->action = action;
}

/*!
 * Sets the Ram API version to include in this request to \a version.
 */
void RamRequest::setApiVersion(const QString &version)
{
    Q_D(RamRequest);
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
bool RamRequest::operator==(const RamRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Ram queue name.
 *
 * @par From Ram FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ram queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RamRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RamRequest::clearParameter(const QString &name)
{
    Q_D(RamRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RamRequest::clearParameters()
{
    Q_D(RamRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RamRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RamRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RamRequest::parameters() const
{
    Q_D(const RamRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RamRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RamRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RamRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RamRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Ram request using the given
 * \a endpoint.
 *
 * This Ram implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RamRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RamRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Ram::RamRequestPrivate
 * \brief The RamRequestPrivate class provides private implementation for RamRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a RamRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
RamRequestPrivate::RamRequestPrivate(const RamRequest::Action action, RamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-01-04"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RamRequest class's copy constructor.
 */
RamRequestPrivate::RamRequestPrivate(const RamRequestPrivate &other,
                                     RamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RamRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Ram service's Action
 * query parameters.
 */
QString RamRequestPrivate::toString(const RamRequest::Action &action)
{
    #define ActionToString(action) \
        case RamRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptResourceShareInvitation);
        ActionToString(AssociateResourceShare);
        ActionToString(AssociateResourceSharePermission);
        ActionToString(CreateResourceShare);
        ActionToString(DeleteResourceShare);
        ActionToString(DisassociateResourceShare);
        ActionToString(DisassociateResourceSharePermission);
        ActionToString(EnableSharingWithAwsOrganization);
        ActionToString(GetPermission);
        ActionToString(GetResourcePolicies);
        ActionToString(GetResourceShareAssociations);
        ActionToString(GetResourceShareInvitations);
        ActionToString(GetResourceShares);
        ActionToString(ListPendingInvitationResources);
        ActionToString(ListPermissionVersions);
        ActionToString(ListPermissions);
        ActionToString(ListPrincipals);
        ActionToString(ListResourceSharePermissions);
        ActionToString(ListResourceTypes);
        ActionToString(ListResources);
        ActionToString(PromoteResourceShareCreatedFromPolicy);
        ActionToString(RejectResourceShareInvitation);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateResourceShare);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ram
} // namespace QtAws
