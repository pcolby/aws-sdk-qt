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
        DetectEntitiesAction,
        DetectEntitiesV2Action,
        DetectPHIAction,
        InferICD10CMAction,
        InferRxNormAction,
        ListEntitiesDetectionV2JobsAction,
        ListICD10CMInferenceJobsAction,
        ListPHIDetectionJobsAction,
        ListRxNormInferenceJobsAction,
        StartEntitiesDetectionV2JobAction,
        StartICD10CMInferenceJobAction,
        StartPHIDetectionJobAction,
        StartRxNormInferenceJobAction,
        StopEntitiesDetectionV2JobAction,
        StopICD10CMInferenceJobAction,
        StopPHIDetectionJobAction,
        StopRxNormInferenceJobAction,
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
    ComprehendMedicalRequestPrivate * const d_ptr; ///< Internal d-pointer.
    ComprehendMedicalRequest(ComprehendMedicalRequestPrivate * const d);
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
