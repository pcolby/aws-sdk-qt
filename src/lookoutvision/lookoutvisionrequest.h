// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTVISIONREQUEST_H
#define QTAWS_LOOKOUTVISIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslookoutvisionglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LookoutVision {

class LookoutVisionRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT LookoutVisionRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LookoutVision.
    enum Action {
        CreateDatasetAction,
        CreateModelAction,
        CreateProjectAction,
        DeleteDatasetAction,
        DeleteModelAction,
        DeleteProjectAction,
        DescribeDatasetAction,
        DescribeModelAction,
        DescribeModelPackagingJobAction,
        DescribeProjectAction,
        DetectAnomaliesAction,
        ListDatasetEntriesAction,
        ListModelPackagingJobsAction,
        ListModelsAction,
        ListProjectsAction,
        ListTagsForResourceAction,
        StartModelAction,
        StartModelPackagingJobAction,
        StopModelAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatasetEntriesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LookoutVisionRequest(const Action action);
    LookoutVisionRequest(const LookoutVisionRequest &other);
    LookoutVisionRequest &operator=(const LookoutVisionRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LookoutVisionRequest &other) const;


protected:
    /// @cond internal
    explicit LookoutVisionRequest(LookoutVisionRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookoutVisionRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
