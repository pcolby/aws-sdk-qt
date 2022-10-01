// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RAMREQUEST_H
#define QTAWS_RAMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsramglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Ram {

class RamRequestPrivate;

class QTAWSRAM_EXPORT RamRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Ram.
    enum Action {
        AcceptResourceShareInvitationAction,
        AssociateResourceShareAction,
        AssociateResourceSharePermissionAction,
        CreateResourceShareAction,
        DeleteResourceShareAction,
        DisassociateResourceShareAction,
        DisassociateResourceSharePermissionAction,
        EnableSharingWithAwsOrganizationAction,
        GetPermissionAction,
        GetResourcePoliciesAction,
        GetResourceShareAssociationsAction,
        GetResourceShareInvitationsAction,
        GetResourceSharesAction,
        ListPendingInvitationResourcesAction,
        ListPermissionVersionsAction,
        ListPermissionsAction,
        ListPrincipalsAction,
        ListResourceSharePermissionsAction,
        ListResourceTypesAction,
        ListResourcesAction,
        PromoteResourceShareCreatedFromPolicyAction,
        RejectResourceShareInvitationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateResourceShareAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RamRequest(const Action action);
    RamRequest(const RamRequest &other);
    RamRequest &operator=(const RamRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RamRequest &other) const;


protected:
    /// @cond internal
    explicit RamRequest(RamRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RamRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
