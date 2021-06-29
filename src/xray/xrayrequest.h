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

#ifndef QTAWS_XRAYREQUEST_H
#define QTAWS_XRAYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsxrayglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace XRay {

class XRayRequestPrivate;

class QTAWSXRAY_EXPORT XRayRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by XRay.
    enum Action {
        BatchGetTracesAction,
        CreateGroupAction,
        CreateSamplingRuleAction,
        DeleteGroupAction,
        DeleteSamplingRuleAction,
        GetEncryptionConfigAction,
        GetGroupAction,
        GetGroupsAction,
        GetInsightAction,
        GetInsightEventsAction,
        GetInsightImpactGraphAction,
        GetInsightSummariesAction,
        GetSamplingRulesAction,
        GetSamplingStatisticSummariesAction,
        GetSamplingTargetsAction,
        GetServiceGraphAction,
        GetTimeSeriesServiceStatisticsAction,
        GetTraceGraphAction,
        GetTraceSummariesAction,
        ListTagsForResourceAction,
        PutEncryptionConfigAction,
        PutTelemetryRecordsAction,
        PutTraceSegmentsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateGroupAction,
        UpdateSamplingRuleAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    XRayRequest(const Action action);
    XRayRequest(const XRayRequest &other);
    XRayRequest &operator=(const XRayRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const XRayRequest &other) const;


protected:
    /// @cond internal
    XRayRequestPrivate * const d_ptr; ///< Internal d-pointer.
    XRayRequest(XRayRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(XRayRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
