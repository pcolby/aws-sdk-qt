// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FRAUDDETECTORREQUEST_H
#define QTAWS_FRAUDDETECTORREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfrauddetectorglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace FraudDetector {

class FraudDetectorRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT FraudDetectorRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by FraudDetector.
    enum Action {
        BatchCreateVariableAction,
        BatchGetVariableAction,
        CancelBatchImportJobAction,
        CancelBatchPredictionJobAction,
        CreateBatchImportJobAction,
        CreateBatchPredictionJobAction,
        CreateDetectorVersionAction,
        CreateModelAction,
        CreateModelVersionAction,
        CreateRuleAction,
        CreateVariableAction,
        DeleteBatchImportJobAction,
        DeleteBatchPredictionJobAction,
        DeleteDetectorAction,
        DeleteDetectorVersionAction,
        DeleteEntityTypeAction,
        DeleteEventAction,
        DeleteEventTypeAction,
        DeleteEventsByEventTypeAction,
        DeleteExternalModelAction,
        DeleteLabelAction,
        DeleteModelAction,
        DeleteModelVersionAction,
        DeleteOutcomeAction,
        DeleteRuleAction,
        DeleteVariableAction,
        DescribeDetectorAction,
        DescribeModelVersionsAction,
        GetBatchImportJobsAction,
        GetBatchPredictionJobsAction,
        GetDeleteEventsByEventTypeStatusAction,
        GetDetectorVersionAction,
        GetDetectorsAction,
        GetEntityTypesAction,
        GetEventAction,
        GetEventPredictionAction,
        GetEventPredictionMetadataAction,
        GetEventTypesAction,
        GetExternalModelsAction,
        GetKMSEncryptionKeyAction,
        GetLabelsAction,
        GetModelVersionAction,
        GetModelsAction,
        GetOutcomesAction,
        GetRulesAction,
        GetVariablesAction,
        ListEventPredictionsAction,
        ListTagsForResourceAction,
        PutDetectorAction,
        PutEntityTypeAction,
        PutEventTypeAction,
        PutExternalModelAction,
        PutKMSEncryptionKeyAction,
        PutLabelAction,
        PutOutcomeAction,
        SendEventAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDetectorVersionAction,
        UpdateDetectorVersionMetadataAction,
        UpdateDetectorVersionStatusAction,
        UpdateEventLabelAction,
        UpdateModelAction,
        UpdateModelVersionAction,
        UpdateModelVersionStatusAction,
        UpdateRuleMetadataAction,
        UpdateRuleVersionAction,
        UpdateVariableAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FraudDetectorRequest(const Action action);
    FraudDetectorRequest(const FraudDetectorRequest &other);
    FraudDetectorRequest &operator=(const FraudDetectorRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FraudDetectorRequest &other) const;


protected:
    /// @cond internal
    explicit FraudDetectorRequest(FraudDetectorRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FraudDetectorRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
