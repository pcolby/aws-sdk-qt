// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IDENTITYSTOREREQUEST_H
#define QTAWS_IDENTITYSTOREREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsidentitystoreglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IdentityStore {

class IdentityStoreRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT IdentityStoreRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IdentityStore.
    enum Action {
        CreateGroupAction,
        CreateGroupMembershipAction,
        CreateUserAction,
        DeleteGroupAction,
        DeleteGroupMembershipAction,
        DeleteUserAction,
        DescribeGroupAction,
        DescribeGroupMembershipAction,
        DescribeUserAction,
        GetGroupIdAction,
        GetGroupMembershipIdAction,
        GetUserIdAction,
        IsMemberInGroupsAction,
        ListGroupMembershipsAction,
        ListGroupMembershipsForMemberAction,
        ListGroupsAction,
        ListUsersAction,
        UpdateGroupAction,
        UpdateUserAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IdentityStoreRequest(const Action action);
    IdentityStoreRequest(const IdentityStoreRequest &other);
    IdentityStoreRequest &operator=(const IdentityStoreRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IdentityStoreRequest &other) const;


protected:
    /// @cond internal
    explicit IdentityStoreRequest(IdentityStoreRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IdentityStoreRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
