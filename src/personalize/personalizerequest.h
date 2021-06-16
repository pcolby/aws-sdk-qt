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

#ifndef QTAWS_PERSONALIZEREQUEST_H
#define QTAWS_PERSONALIZEREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Personalize {

class PersonalizeRequestPrivate;

class QTAWS_EXPORT PersonalizeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Personalize.
    enum Action {
        CreateBatchInferenceJobAction,
        CreateCampaignAction,
        CreateDatasetAction,
        CreateDatasetExportJobAction,
        CreateDatasetGroupAction,
        CreateDatasetImportJobAction,
        CreateEventTrackerAction,
        CreateFilterAction,
        CreateSchemaAction,
        CreateSolutionAction,
        CreateSolutionVersionAction,
        DeleteCampaignAction,
        DeleteDatasetAction,
        DeleteDatasetGroupAction,
        DeleteEventTrackerAction,
        DeleteFilterAction,
        DeleteSchemaAction,
        DeleteSolutionAction,
        DescribeAlgorithmAction,
        DescribeBatchInferenceJobAction,
        DescribeCampaignAction,
        DescribeDatasetAction,
        DescribeDatasetExportJobAction,
        DescribeDatasetGroupAction,
        DescribeDatasetImportJobAction,
        DescribeEventTrackerAction,
        DescribeFeatureTransformationAction,
        DescribeFilterAction,
        DescribeRecipeAction,
        DescribeSchemaAction,
        DescribeSolutionAction,
        DescribeSolutionVersionAction,
        GetSolutionMetricsAction,
        ListBatchInferenceJobsAction,
        ListCampaignsAction,
        ListDatasetExportJobsAction,
        ListDatasetGroupsAction,
        ListDatasetImportJobsAction,
        ListDatasetsAction,
        ListEventTrackersAction,
        ListFiltersAction,
        ListRecipesAction,
        ListSchemasAction,
        ListSolutionVersionsAction,
        ListSolutionsAction,
        StopSolutionVersionCreationAction,
        UpdateCampaignAction,
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
    PersonalizeRequest(PersonalizeRequestPrivate * const d);
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
