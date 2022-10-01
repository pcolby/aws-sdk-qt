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
