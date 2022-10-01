// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOCDBREQUEST_H
#define QTAWS_DOCDBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdocdbglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DocDb {

class DocDbRequestPrivate;

class QTAWSDOCDB_EXPORT DocDbRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DocDb.
    enum Action {
        AddSourceIdentifierToSubscriptionAction,
        AddTagsToResourceAction,
        ApplyPendingMaintenanceActionAction,
        CopyDBClusterParameterGroupAction,
        CopyDBClusterSnapshotAction,
        CreateDBClusterAction,
        CreateDBClusterParameterGroupAction,
        CreateDBClusterSnapshotAction,
        CreateDBInstanceAction,
        CreateDBSubnetGroupAction,
        CreateEventSubscriptionAction,
        CreateGlobalClusterAction,
        DeleteDBClusterAction,
        DeleteDBClusterParameterGroupAction,
        DeleteDBClusterSnapshotAction,
        DeleteDBInstanceAction,
        DeleteDBSubnetGroupAction,
        DeleteEventSubscriptionAction,
        DeleteGlobalClusterAction,
        DescribeCertificatesAction,
        DescribeDBClusterParameterGroupsAction,
        DescribeDBClusterParametersAction,
        DescribeDBClusterSnapshotAttributesAction,
        DescribeDBClusterSnapshotsAction,
        DescribeDBClustersAction,
        DescribeDBEngineVersionsAction,
        DescribeDBInstancesAction,
        DescribeDBSubnetGroupsAction,
        DescribeEngineDefaultClusterParametersAction,
        DescribeEventCategoriesAction,
        DescribeEventSubscriptionsAction,
        DescribeEventsAction,
        DescribeGlobalClustersAction,
        DescribeOrderableDBInstanceOptionsAction,
        DescribePendingMaintenanceActionsAction,
        FailoverDBClusterAction,
        ListTagsForResourceAction,
        ModifyDBClusterAction,
        ModifyDBClusterParameterGroupAction,
        ModifyDBClusterSnapshotAttributeAction,
        ModifyDBInstanceAction,
        ModifyDBSubnetGroupAction,
        ModifyEventSubscriptionAction,
        ModifyGlobalClusterAction,
        RebootDBInstanceAction,
        RemoveFromGlobalClusterAction,
        RemoveSourceIdentifierFromSubscriptionAction,
        RemoveTagsFromResourceAction,
        ResetDBClusterParameterGroupAction,
        RestoreDBClusterFromSnapshotAction,
        RestoreDBClusterToPointInTimeAction,
        StartDBClusterAction,
        StopDBClusterAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DocDbRequest(const Action action);
    DocDbRequest(const DocDbRequest &other);
    DocDbRequest &operator=(const DocDbRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DocDbRequest &other) const;


protected:
    /// @cond internal
    explicit DocDbRequest(DocDbRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DocDbRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
