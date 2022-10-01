// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGPLANSREQUEST_H
#define QTAWS_AUTOSCALINGPLANSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsautoscalingplansglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansRequestPrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT AutoScalingPlansRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AutoScalingPlans.
    enum Action {
        CreateScalingPlanAction,
        DeleteScalingPlanAction,
        DescribeScalingPlanResourcesAction,
        DescribeScalingPlansAction,
        GetScalingPlanResourceForecastDataAction,
        UpdateScalingPlanAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AutoScalingPlansRequest(const Action action);
    AutoScalingPlansRequest(const AutoScalingPlansRequest &other);
    AutoScalingPlansRequest &operator=(const AutoScalingPlansRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AutoScalingPlansRequest &other) const;


protected:
    /// @cond internal
    explicit AutoScalingPlansRequest(AutoScalingPlansRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AutoScalingPlansRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
