// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAKEFORMATIONREQUEST_H
#define QTAWS_LAKEFORMATIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslakeformationglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LakeFormation {

class LakeFormationRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT LakeFormationRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LakeFormation.
    enum Action {
        AddLFTagsToResourceAction,
        AssumeDecoratedRoleWithSAMLAction,
        BatchGrantPermissionsAction,
        BatchRevokePermissionsAction,
        CancelTransactionAction,
        CommitTransactionAction,
        CreateDataCellsFilterAction,
        CreateLFTagAction,
        DeleteDataCellsFilterAction,
        DeleteLFTagAction,
        DeleteObjectsOnCancelAction,
        DeregisterResourceAction,
        DescribeResourceAction,
        DescribeTransactionAction,
        ExtendTransactionAction,
        GetDataLakeSettingsAction,
        GetEffectivePermissionsForPathAction,
        GetLFTagAction,
        GetQueryStateAction,
        GetQueryStatisticsAction,
        GetResourceLFTagsAction,
        GetTableObjectsAction,
        GetTemporaryGluePartitionCredentialsAction,
        GetTemporaryGlueTableCredentialsAction,
        GetWorkUnitResultsAction,
        GetWorkUnitsAction,
        GrantPermissionsAction,
        ListDataCellsFilterAction,
        ListLFTagsAction,
        ListPermissionsAction,
        ListResourcesAction,
        ListTableStorageOptimizersAction,
        ListTransactionsAction,
        PutDataLakeSettingsAction,
        RegisterResourceAction,
        RemoveLFTagsFromResourceAction,
        RevokePermissionsAction,
        SearchDatabasesByLFTagsAction,
        SearchTablesByLFTagsAction,
        StartQueryPlanningAction,
        StartTransactionAction,
        UpdateLFTagAction,
        UpdateResourceAction,
        UpdateTableObjectsAction,
        UpdateTableStorageOptimizerAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LakeFormationRequest(const Action action);
    LakeFormationRequest(const LakeFormationRequest &other);
    LakeFormationRequest &operator=(const LakeFormationRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LakeFormationRequest &other) const;


protected:
    /// @cond internal
    explicit LakeFormationRequest(LakeFormationRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LakeFormationRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
