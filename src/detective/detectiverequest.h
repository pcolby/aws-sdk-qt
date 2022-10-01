// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTIVEREQUEST_H
#define QTAWS_DETECTIVEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdetectiveglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Detective {

class DetectiveRequestPrivate;

class QTAWSDETECTIVE_EXPORT DetectiveRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Detective.
    enum Action {
        AcceptInvitationAction,
        BatchGetGraphMemberDatasourcesAction,
        BatchGetMembershipDatasourcesAction,
        CreateGraphAction,
        CreateMembersAction,
        DeleteGraphAction,
        DeleteMembersAction,
        DescribeOrganizationConfigurationAction,
        DisableOrganizationAdminAccountAction,
        DisassociateMembershipAction,
        EnableOrganizationAdminAccountAction,
        GetMembersAction,
        ListDatasourcePackagesAction,
        ListGraphsAction,
        ListInvitationsAction,
        ListMembersAction,
        ListOrganizationAdminAccountsAction,
        ListTagsForResourceAction,
        RejectInvitationAction,
        StartMonitoringMemberAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatasourcePackagesAction,
        UpdateOrganizationConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DetectiveRequest(const Action action);
    DetectiveRequest(const DetectiveRequest &other);
    DetectiveRequest &operator=(const DetectiveRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DetectiveRequest &other) const;


protected:
    /// @cond internal
    explicit DetectiveRequest(DetectiveRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectiveRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
