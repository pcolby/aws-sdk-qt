/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
        CancelBatchPredictionJobAction,
        CreateBatchPredictionJobAction,
        CreateDetectorVersionAction,
        CreateModelAction,
        CreateModelVersionAction,
        CreateRuleAction,
        CreateVariableAction,
        DeleteBatchPredictionJobAction,
        DeleteDetectorAction,
        DeleteDetectorVersionAction,
        DeleteEntityTypeAction,
        DeleteEventAction,
        DeleteEventTypeAction,
        DeleteExternalModelAction,
        DeleteLabelAction,
        DeleteModelAction,
        DeleteModelVersionAction,
        DeleteOutcomeAction,
        DeleteRuleAction,
        DeleteVariableAction,
        DescribeDetectorAction,
        DescribeModelVersionsAction,
        GetBatchPredictionJobsAction,
        GetDetectorVersionAction,
        GetDetectorsAction,
        GetEntityTypesAction,
        GetEventPredictionAction,
        GetEventTypesAction,
        GetExternalModelsAction,
        GetKMSEncryptionKeyAction,
        GetLabelsAction,
        GetModelVersionAction,
        GetModelsAction,
        GetOutcomesAction,
        GetRulesAction,
        GetVariablesAction,
        ListTagsForResourceAction,
        PutDetectorAction,
        PutEntityTypeAction,
        PutEventTypeAction,
        PutExternalModelAction,
        PutKMSEncryptionKeyAction,
        PutLabelAction,
        PutOutcomeAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDetectorVersionAction,
        UpdateDetectorVersionMetadataAction,
        UpdateDetectorVersionStatusAction,
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
    FraudDetectorRequestPrivate * const d_ptr; ///< Internal d-pointer.
    FraudDetectorRequest(FraudDetectorRequestPrivate * const d);
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
