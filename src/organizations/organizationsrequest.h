// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ORGANIZATIONSREQUEST_H
#define QTAWS_ORGANIZATIONSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsorganizationsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Organizations {

class OrganizationsRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT OrganizationsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Organizations.
    enum Action {
        AcceptHandshakeAction,
        AttachPolicyAction,
        CancelHandshakeAction,
        CloseAccountAction,
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
    explicit OrganizationsRequest(OrganizationsRequestPrivate * const d);
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
