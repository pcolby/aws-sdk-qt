// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    explicit XRayRequest(XRayRequestPrivate * const d);
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
