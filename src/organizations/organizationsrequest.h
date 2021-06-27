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

#ifndef QTAWS_ORGANIZATIONSREQUEST_H
#define QTAWS_ORGANIZATIONSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Organizations {

class OrganizationsRequestPrivate;

class QTAWS_EXPORT OrganizationsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Organizations.
    enum Action {
        AcceptHandshakeAction,
        AttachPolicyAction,
        CancelHandshakeAction,
        CreateAccountAction,
        CreateGovCloudAccountAction,
        CreateOrganizationAction,
        CreateOrganizationalUnitAction,
        CreatePolicyAction,
        DeclineHandshakeAction,
        DeleteOrganizationAction,
        DeleteOrganizationalUnitAction,
        DeletePolicyAction,
        DeregisterDelegatedAdministratorAction,
        DescribeAccountAction,
        DescribeCreateAccountStatusAction,
        DescribeEffectivePolicyAction,
        DescribeHandshakeAction,
        DescribeOrganizationAction,
        DescribeOrganizationalUnitAction,
        DescribePolicyAction,
        DetachPolicyAction,
        DisableAWSServiceAccessAction,
        DisablePolicyTypeAction,
        EnableAWSServiceAccessAction,
        EnableAllFeaturesAction,
        EnablePolicyTypeAction,
        InviteAccountToOrganizationAction,
        LeaveOrganizationAction,
        ListAWSServiceAccessForOrganizationAction,
        ListAccountsAction,
        ListAccountsForParentAction,
        ListChildrenAction,
        ListCreateAccountStatusAction,
        ListDelegatedAdministratorsAction,
        ListDelegatedServicesForAccountAction,
        ListHandshakesForAccountAction,
        ListHandshakesForOrganizationAction,
        ListOrganizationalUnitsForParentAction,
        ListParentsAction,
        ListPoliciesAction,
        ListPoliciesForTargetAction,
        ListRootsAction,
        ListTagsForResourceAction,
        ListTargetsForPolicyAction,
        MoveAccountAction,
        RegisterDelegatedAdministratorAction,
        RemoveAccountFromOrganizationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateOrganizationalUnitAction,
        UpdatePolicyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    OrganizationsRequest(const Action action);
    OrganizationsRequest(const OrganizationsRequest &other);
    OrganizationsRequest &operator=(const OrganizationsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const OrganizationsRequest &other) const;


protected:
    /// @cond internal
    OrganizationsRequestPrivate * const d_ptr; ///< Internal d-pointer.
    OrganizationsRequest(OrganizationsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OrganizationsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
