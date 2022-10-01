// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDMEDICALREQUEST_H
#define QTAWS_COMPREHENDMEDICALREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscomprehendmedicalglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ComprehendMedical {

class ComprehendMedicalRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ComprehendMedicalRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ComprehendMedical.
    enum Action {
        DescribeEntitiesDetectionV2JobAction,
        DescribeICD10CMInferenceJobAction,
        DescribePHIDetectionJobAction,
        DescribeRxNormInferenceJobAction,
        DescribeSNOMEDCTInferenceJobAction,
        DetectEntitiesAction,
        DetectEntitiesV2Action,
        DetectPHIAction,
        InferICD10CMAction,
        InferRxNormAction,
        InferSNOMEDCTAction,
        ListEntitiesDetectionV2JobsAction,
        ListICD10CMInferenceJobsAction,
        ListPHIDetectionJobsAction,
        ListRxNormInferenceJobsAction,
        ListSNOMEDCTInferenceJobsAction,
        StartEntitiesDetectionV2JobAction,
        StartICD10CMInferenceJobAction,
        StartPHIDetectionJobAction,
        StartRxNormInferenceJobAction,
        StartSNOMEDCTInferenceJobAction,
        StopEntitiesDetectionV2JobAction,
        StopICD10CMInferenceJobAction,
        StopPHIDetectionJobAction,
        StopRxNormInferenceJobAction,
        StopSNOMEDCTInferenceJobAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ComprehendMedicalRequest(const Action action);
    ComprehendMedicalRequest(const ComprehendMedicalRequest &other);
    ComprehendMedicalRequest &operator=(const ComprehendMedicalRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ComprehendMedicalRequest &other) const;


protected:
    /// @cond internal
    explicit ComprehendMedicalRequest(ComprehendMedicalRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComprehendMedicalRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
