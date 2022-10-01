// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONINSIGHTSREQUEST_H
#define QTAWS_APPLICATIONINSIGHTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapplicationinsightsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApplicationInsights {

class ApplicationInsightsRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ApplicationInsightsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ApplicationInsights.
    enum Action {
        CreateApplicationAction,
        CreateComponentAction,
        CreateLogPatternAction,
        DeleteApplicationAction,
        DeleteComponentAction,
        DeleteLogPatternAction,
        DescribeApplicationAction,
        DescribeComponentAction,
        DescribeComponentConfigurationAction,
        DescribeComponentConfigurationRecommendationAction,
        DescribeLogPatternAction,
        DescribeObservationAction,
        DescribeProblemAction,
        DescribeProblemObservationsAction,
        ListApplicationsAction,
        ListComponentsAction,
        ListConfigurationHistoryAction,
        ListLogPatternSetsAction,
        ListLogPatternsAction,
        ListProblemsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
        UpdateComponentAction,
        UpdateComponentConfigurationAction,
        UpdateLogPatternAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ApplicationInsightsRequest(const Action action);
    ApplicationInsightsRequest(const ApplicationInsightsRequest &other);
    ApplicationInsightsRequest &operator=(const ApplicationInsightsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ApplicationInsightsRequest &other) const;


protected:
    /// @cond internal
    explicit ApplicationInsightsRequest(ApplicationInsightsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationInsightsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
