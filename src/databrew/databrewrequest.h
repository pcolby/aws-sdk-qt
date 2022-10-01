// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABREWREQUEST_H
#define QTAWS_DATABREWREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdatabrewglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DataBrew {

class DataBrewRequestPrivate;

class QTAWSDATABREW_EXPORT DataBrewRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DataBrew.
    enum Action {
        BatchDeleteRecipeVersionAction,
        CreateDatasetAction,
        CreateProfileJobAction,
        CreateProjectAction,
        CreateRecipeAction,
        CreateRecipeJobAction,
        CreateRulesetAction,
        CreateScheduleAction,
        DeleteDatasetAction,
        DeleteJobAction,
        DeleteProjectAction,
        DeleteRecipeVersionAction,
        DeleteRulesetAction,
        DeleteScheduleAction,
        DescribeDatasetAction,
        DescribeJobAction,
        DescribeJobRunAction,
        DescribeProjectAction,
        DescribeRecipeAction,
        DescribeRulesetAction,
        DescribeScheduleAction,
        ListDatasetsAction,
        ListJobRunsAction,
        ListJobsAction,
        ListProjectsAction,
        ListRecipeVersionsAction,
        ListRecipesAction,
        ListRulesetsAction,
        ListSchedulesAction,
        ListTagsForResourceAction,
        PublishRecipeAction,
        SendProjectSessionActionAction,
        StartJobRunAction,
        StartProjectSessionAction,
        StopJobRunAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatasetAction,
        UpdateProfileJobAction,
        UpdateProjectAction,
        UpdateRecipeAction,
        UpdateRecipeJobAction,
        UpdateRulesetAction,
        UpdateScheduleAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DataBrewRequest(const Action action);
    DataBrewRequest(const DataBrewRequest &other);
    DataBrewRequest &operator=(const DataBrewRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DataBrewRequest &other) const;


protected:
    /// @cond internal
    explicit DataBrewRequest(DataBrewRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DataBrewRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
