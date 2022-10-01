// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FMSREQUEST_H
#define QTAWS_FMSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfmsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Fms {

class FmsRequestPrivate;

class QTAWSFMS_EXPORT FmsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Fms.
    enum Action {
        AssociateAdminAccountAction,
        AssociateThirdPartyFirewallAction,
        DeleteAppsListAction,
        DeleteNotificationChannelAction,
        DeletePolicyAction,
        DeleteProtocolsListAction,
        DisassociateAdminAccountAction,
        DisassociateThirdPartyFirewallAction,
        GetAdminAccountAction,
        GetAppsListAction,
        GetComplianceDetailAction,
        GetNotificationChannelAction,
        GetPolicyAction,
        GetProtectionStatusAction,
        GetProtocolsListAction,
        GetThirdPartyFirewallAssociationStatusAction,
        GetViolationDetailsAction,
        ListAppsListsAction,
        ListComplianceStatusAction,
        ListMemberAccountsAction,
        ListPoliciesAction,
        ListProtocolsListsAction,
        ListTagsForResourceAction,
        ListThirdPartyFirewallFirewallPoliciesAction,
        PutAppsListAction,
        PutNotificationChannelAction,
        PutPolicyAction,
        PutProtocolsListAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FmsRequest(const Action action);
    FmsRequest(const FmsRequest &other);
    FmsRequest &operator=(const FmsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FmsRequest &other) const;


protected:
    /// @cond internal
    explicit FmsRequest(FmsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FmsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
