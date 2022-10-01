// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESILIENCEHUBREQUEST_H
#define QTAWS_RESILIENCEHUBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsresiliencehubglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ResilienceHub {

class ResilienceHubRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ResilienceHubRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ResilienceHub.
    enum Action {
        AddDraftAppVersionResourceMappingsAction,
        CreateAppAction,
        CreateRecommendationTemplateAction,
        CreateResiliencyPolicyAction,
        DeleteAppAction,
        DeleteAppAssessmentAction,
        DeleteRecommendationTemplateAction,
        DeleteResiliencyPolicyAction,
        DescribeAppAction,
        DescribeAppAssessmentAction,
        DescribeAppVersionResourcesResolutionStatusAction,
        DescribeAppVersionTemplateAction,
        DescribeDraftAppVersionResourcesImportStatusAction,
        DescribeResiliencyPolicyAction,
        ImportResourcesToDraftAppVersionAction,
        ListAlarmRecommendationsAction,
        ListAppAssessmentsAction,
        ListAppComponentCompliancesAction,
        ListAppComponentRecommendationsAction,
        ListAppVersionResourceMappingsAction,
        ListAppVersionResourcesAction,
        ListAppVersionsAction,
        ListAppsAction,
        ListRecommendationTemplatesAction,
        ListResiliencyPoliciesAction,
        ListSopRecommendationsAction,
        ListSuggestedResiliencyPoliciesAction,
        ListTagsForResourceAction,
        ListTestRecommendationsAction,
        ListUnsupportedAppVersionResourcesAction,
        PublishAppVersionAction,
        PutDraftAppVersionTemplateAction,
        RemoveDraftAppVersionResourceMappingsAction,
        ResolveAppVersionResourcesAction,
        StartAppAssessmentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAppAction,
        UpdateResiliencyPolicyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ResilienceHubRequest(const Action action);
    ResilienceHubRequest(const ResilienceHubRequest &other);
    ResilienceHubRequest &operator=(const ResilienceHubRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ResilienceHubRequest &other) const;


protected:
    /// @cond internal
    explicit ResilienceHubRequest(ResilienceHubRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResilienceHubRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
