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
