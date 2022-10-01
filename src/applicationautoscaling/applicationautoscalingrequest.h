// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONAUTOSCALINGREQUEST_H
#define QTAWS_APPLICATIONAUTOSCALINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapplicationautoscalingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApplicationAutoScaling {

class ApplicationAutoScalingRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT ApplicationAutoScalingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ApplicationAutoScaling.
    enum Action {
        DeleteScalingPolicyAction,
        DeleteScheduledActionAction,
        DeregisterScalableTargetAction,
        DescribeScalableTargetsAction,
        DescribeScalingActivitiesAction,
        DescribeScalingPoliciesAction,
        DescribeScheduledActionsAction,
        PutScalingPolicyAction,
        PutScheduledActionAction,
        RegisterScalableTargetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ApplicationAutoScalingRequest(const Action action);
    ApplicationAutoScalingRequest(const ApplicationAutoScalingRequest &other);
    ApplicationAutoScalingRequest &operator=(const ApplicationAutoScalingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ApplicationAutoScalingRequest &other) const;


protected:
    /// @cond internal
    explicit ApplicationAutoScalingRequest(ApplicationAutoScalingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationAutoScalingRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
