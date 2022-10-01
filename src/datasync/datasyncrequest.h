// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATASYNCREQUEST_H
#define QTAWS_DATASYNCREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdatasyncglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DataSync {

class DataSyncRequestPrivate;

class QTAWSDATASYNC_EXPORT DataSyncRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DataSync.
    enum Action {
        CancelTaskExecutionAction,
        CreateAgentAction,
        CreateLocationEfsAction,
        CreateLocationFsxLustreAction,
        CreateLocationFsxOntapAction,
        CreateLocationFsxOpenZfsAction,
        CreateLocationFsxWindowsAction,
        CreateLocationHdfsAction,
        CreateLocationNfsAction,
        CreateLocationObjectStorageAction,
        CreateLocationS3Action,
        CreateLocationSmbAction,
        CreateTaskAction,
        DeleteAgentAction,
        DeleteLocationAction,
        DeleteTaskAction,
        DescribeAgentAction,
        DescribeLocationEfsAction,
        DescribeLocationFsxLustreAction,
        DescribeLocationFsxOntapAction,
        DescribeLocationFsxOpenZfsAction,
        DescribeLocationFsxWindowsAction,
        DescribeLocationHdfsAction,
        DescribeLocationNfsAction,
        DescribeLocationObjectStorageAction,
        DescribeLocationS3Action,
        DescribeLocationSmbAction,
        DescribeTaskAction,
        DescribeTaskExecutionAction,
        ListAgentsAction,
        ListLocationsAction,
        ListTagsForResourceAction,
        ListTaskExecutionsAction,
        ListTasksAction,
        StartTaskExecutionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAgentAction,
        UpdateLocationHdfsAction,
        UpdateLocationNfsAction,
        UpdateLocationObjectStorageAction,
        UpdateLocationSmbAction,
        UpdateTaskAction,
        UpdateTaskExecutionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DataSyncRequest(const Action action);
    DataSyncRequest(const DataSyncRequest &other);
    DataSyncRequest &operator=(const DataSyncRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DataSyncRequest &other) const;


protected:
    /// @cond internal
    explicit DataSyncRequest(DataSyncRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DataSyncRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
