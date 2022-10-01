// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEMORYDBREQUEST_H
#define QTAWS_MEMORYDBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmemorydbglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MemoryDb {

class MemoryDbRequestPrivate;

class QTAWSMEMORYDB_EXPORT MemoryDbRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MemoryDb.
    enum Action {
        BatchUpdateClusterAction,
        CopySnapshotAction,
        CreateACLAction,
        CreateClusterAction,
        CreateParameterGroupAction,
        CreateSnapshotAction,
        CreateSubnetGroupAction,
        CreateUserAction,
        DeleteACLAction,
        DeleteClusterAction,
        DeleteParameterGroupAction,
        DeleteSnapshotAction,
        DeleteSubnetGroupAction,
        DeleteUserAction,
        DescribeACLsAction,
        DescribeClustersAction,
        DescribeEngineVersionsAction,
        DescribeEventsAction,
        DescribeParameterGroupsAction,
        DescribeParametersAction,
        DescribeServiceUpdatesAction,
        DescribeSnapshotsAction,
        DescribeSubnetGroupsAction,
        DescribeUsersAction,
        FailoverShardAction,
        ListAllowedNodeTypeUpdatesAction,
        ListTagsAction,
        ResetParameterGroupAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateACLAction,
        UpdateClusterAction,
        UpdateParameterGroupAction,
        UpdateSubnetGroupAction,
        UpdateUserAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MemoryDbRequest(const Action action);
    MemoryDbRequest(const MemoryDbRequest &other);
    MemoryDbRequest &operator=(const MemoryDbRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MemoryDbRequest &other) const;


protected:
    /// @cond internal
    explicit MemoryDbRequest(MemoryDbRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MemoryDbRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
