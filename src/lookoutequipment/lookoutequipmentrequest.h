// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTEQUIPMENTREQUEST_H
#define QTAWS_LOOKOUTEQUIPMENTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslookoutequipmentglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LookoutEquipment {

class LookoutEquipmentRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT LookoutEquipmentRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LookoutEquipment.
    enum Action {
        CreateDatasetAction,
        CreateInferenceSchedulerAction,
        CreateLabelAction,
        CreateLabelGroupAction,
        CreateModelAction,
        DeleteDatasetAction,
        DeleteInferenceSchedulerAction,
        DeleteLabelAction,
        DeleteLabelGroupAction,
        DeleteModelAction,
        DescribeDataIngestionJobAction,
        DescribeDatasetAction,
        DescribeInferenceSchedulerAction,
        DescribeLabelAction,
        DescribeLabelGroupAction,
        DescribeModelAction,
        ListDataIngestionJobsAction,
        ListDatasetsAction,
        ListInferenceEventsAction,
        ListInferenceExecutionsAction,
        ListInferenceSchedulersAction,
        ListLabelGroupsAction,
        ListLabelsAction,
        ListModelsAction,
        ListSensorStatisticsAction,
        ListTagsForResourceAction,
        StartDataIngestionJobAction,
        StartInferenceSchedulerAction,
        StopInferenceSchedulerAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateInferenceSchedulerAction,
        UpdateLabelGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LookoutEquipmentRequest(const Action action);
    LookoutEquipmentRequest(const LookoutEquipmentRequest &other);
    LookoutEquipmentRequest &operator=(const LookoutEquipmentRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LookoutEquipmentRequest &other) const;


protected:
    /// @cond internal
    explicit LookoutEquipmentRequest(LookoutEquipmentRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookoutEquipmentRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
