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

#ifndef QTAWS_EFSREQUEST_H
#define QTAWS_EFSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsefsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Efs {

class EfsRequestPrivate;

class QTAWSEFS_EXPORT EfsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Efs.
    enum Action {
        CreateAccessPointAction,
        CreateFileSystemAction,
        CreateMountTargetAction,
        CreateReplicationConfigurationAction,
        CreateTagsAction,
        DeleteAccessPointAction,
        DeleteFileSystemAction,
        DeleteFileSystemPolicyAction,
        DeleteMountTargetAction,
        DeleteReplicationConfigurationAction,
        DeleteTagsAction,
        DescribeAccessPointsAction,
        DescribeAccountPreferencesAction,
        DescribeBackupPolicyAction,
        DescribeFileSystemPolicyAction,
        DescribeFileSystemsAction,
        DescribeLifecycleConfigurationAction,
        DescribeMountTargetSecurityGroupsAction,
        DescribeMountTargetsAction,
        DescribeReplicationConfigurationsAction,
        DescribeTagsAction,
        ListTagsForResourceAction,
        ModifyMountTargetSecurityGroupsAction,
        PutAccountPreferencesAction,
        PutBackupPolicyAction,
        PutFileSystemPolicyAction,
        PutLifecycleConfigurationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateFileSystemAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EfsRequest(const Action action);
    EfsRequest(const EfsRequest &other);
    EfsRequest &operator=(const EfsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EfsRequest &other) const;


protected:
    /// @cond internal
    explicit EfsRequest(EfsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EfsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
