// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSCMREQUEST_H
#define QTAWS_OPSWORKSCMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsopsworkscmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace OpsWorksCm {

class OpsWorksCmRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT OpsWorksCmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by OpsWorksCm.
    enum Action {
        AssociateNodeAction,
        CreateBackupAction,
        CreateServerAction,
        DeleteBackupAction,
        DeleteServerAction,
        DescribeAccountAttributesAction,
        DescribeBackupsAction,
        DescribeEventsAction,
        DescribeNodeAssociationStatusAction,
        DescribeServersAction,
        DisassociateNodeAction,
        ExportServerEngineAttributeAction,
        ListTagsForResourceAction,
        RestoreServerAction,
        StartMaintenanceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateServerAction,
        UpdateServerEngineAttributesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    OpsWorksCmRequest(const Action action);
    OpsWorksCmRequest(const OpsWorksCmRequest &other);
    OpsWorksCmRequest &operator=(const OpsWorksCmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const OpsWorksCmRequest &other) const;


protected:
    /// @cond internal
    explicit OpsWorksCmRequest(OpsWorksCmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpsWorksCmRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
