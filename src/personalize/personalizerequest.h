// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZEREQUEST_H
#define QTAWS_PERSONALIZEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspersonalizeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Personalize {

class PersonalizeRequestPrivate;

class QTAWSPERSONALIZE_EXPORT PersonalizeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Personalize.
    enum Action {
        CreateBatchInferenceJobAction,
        CreateBatchSegmentJobAction,
        CreateCampaignAction,
        CreateDatasetAction,
        CreateDatasetExportJobAction,
        CreateDatasetGroupAction,
        CreateDatasetImportJobAction,
        CreateEventTrackerAction,
        CreateFilterAction,
        CreateRecommenderAction,
        CreateSchemaAction,
        CreateSolutionAction,
        CreateSolutionVersionAction,
        DeleteCampaignAction,
        DeleteDatasetAction,
        DeleteDatasetGroupAction,
        DeleteEventTrackerAction,
        DeleteFilterAction,
        DeleteRecommenderAction,
        DeleteSchemaAction,
        DeleteSolutionAction,
        DescribeAlgorithmAction,
        DescribeBatchInferenceJobAction,
        DescribeBatchSegmentJobAction,
        DescribeCampaignAction,
        DescribeDatasetAction,
        DescribeDatasetExportJobAction,
        DescribeDatasetGroupAction,
        DescribeDatasetImportJobAction,
        DescribeEventTrackerAction,
        DescribeFeatureTransformationAction,
        DescribeFilterAction,
        DescribeRecipeAction,
        DescribeRecommenderAction,
        DescribeSchemaAction,
        DescribeSolutionAction,
        DescribeSolutionVersionAction,
        GetSolutionMetricsAction,
        ListBatchInferenceJobsAction,
        ListBatchSegmentJobsAction,
        ListCampaignsAction,
        ListDatasetExportJobsAction,
        ListDatasetGroupsAction,
        ListDatasetImportJobsAction,
        ListDatasetsAction,
        ListEventTrackersAction,
        ListFiltersAction,
        ListRecipesAction,
        ListRecommendersAction,
        ListSchemasAction,
        ListSolutionVersionsAction,
        ListSolutionsAction,
        ListTagsForResourceAction,
        StartRecommenderAction,
        StopRecommenderAction,
        StopSolutionVersionCreationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCampaignAction,
        UpdateRecommenderAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PersonalizeRequest(const Action action);
    PersonalizeRequest(const PersonalizeRequest &other);
    PersonalizeRequest &operator=(const PersonalizeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PersonalizeRequest &other) const;


protected:
    /// @cond internal
    explicit PersonalizeRequest(PersonalizeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PersonalizeRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
