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

#ifndef QTAWS_GLUEDATABREWREQUEST_H
#define QTAWS_GLUEDATABREWREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsgluedatabrewglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GlueDataBrew {

class GlueDataBrewRequestPrivate;

class QTAWSGLUEDATABREW_EXPORT GlueDataBrewRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GlueDataBrew.
    enum Action {
        BatchDeleteRecipeVersionAction,
        CreateDatasetAction,
        CreateProfileJobAction,
        CreateProjectAction,
        CreateRecipeAction,
        CreateRecipeJobAction,
        CreateScheduleAction,
        DeleteDatasetAction,
        DeleteJobAction,
        DeleteProjectAction,
        DeleteRecipeVersionAction,
        DeleteScheduleAction,
        DescribeDatasetAction,
        DescribeJobAction,
        DescribeJobRunAction,
        DescribeProjectAction,
        DescribeRecipeAction,
        DescribeScheduleAction,
        ListDatasetsAction,
        ListJobRunsAction,
        ListJobsAction,
        ListProjectsAction,
        ListRecipeVersionsAction,
        ListRecipesAction,
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
        UpdateScheduleAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GlueDataBrewRequest(const Action action);
    GlueDataBrewRequest(const GlueDataBrewRequest &other);
    GlueDataBrewRequest &operator=(const GlueDataBrewRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GlueDataBrewRequest &other) const;


protected:
    /// @cond internal
    GlueDataBrewRequest(GlueDataBrewRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlueDataBrewRequest)

};

} // namespace GlueDataBrew
} // namespace QtAws

#endif
