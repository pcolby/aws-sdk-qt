// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBREQUEST_H
#define QTAWS_DYNAMODBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdynamodbglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DynamoDb {

class DynamoDbRequestPrivate;

class QTAWSDYNAMODB_EXPORT DynamoDbRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DynamoDb.
    enum Action {
        BatchExecuteStatementAction,
        BatchGetItemAction,
        BatchWriteItemAction,
        CreateBackupAction,
        CreateGlobalTableAction,
        CreateTableAction,
        DeleteBackupAction,
        DeleteItemAction,
        DeleteTableAction,
        DescribeBackupAction,
        DescribeContinuousBackupsAction,
        DescribeContributorInsightsAction,
        DescribeEndpointsAction,
        DescribeExportAction,
        DescribeGlobalTableAction,
        DescribeGlobalTableSettingsAction,
        DescribeImportAction,
        DescribeKinesisStreamingDestinationAction,
        DescribeLimitsAction,
        DescribeTableAction,
        DescribeTableReplicaAutoScalingAction,
        DescribeTimeToLiveAction,
        DisableKinesisStreamingDestinationAction,
        EnableKinesisStreamingDestinationAction,
        ExecuteStatementAction,
        ExecuteTransactionAction,
        ExportTableToPointInTimeAction,
        GetItemAction,
        ImportTableAction,
        ListBackupsAction,
        ListContributorInsightsAction,
        ListExportsAction,
        ListGlobalTablesAction,
        ListImportsAction,
        ListTablesAction,
        ListTagsOfResourceAction,
        PutItemAction,
        QueryAction,
        RestoreTableFromBackupAction,
        RestoreTableToPointInTimeAction,
        ScanAction,
        TagResourceAction,
        TransactGetItemsAction,
        TransactWriteItemsAction,
        UntagResourceAction,
        UpdateContinuousBackupsAction,
        UpdateContributorInsightsAction,
        UpdateGlobalTableAction,
        UpdateGlobalTableSettingsAction,
        UpdateItemAction,
        UpdateTableAction,
        UpdateTableReplicaAutoScalingAction,
        UpdateTimeToLiveAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DynamoDbRequest(const Action action);
    DynamoDbRequest(const DynamoDbRequest &other);
    DynamoDbRequest &operator=(const DynamoDbRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DynamoDbRequest &other) const;


protected:
    /// @cond internal
    explicit DynamoDbRequest(DynamoDbRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DynamoDbRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
