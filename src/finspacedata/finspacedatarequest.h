// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEDATAREQUEST_H
#define QTAWS_FINSPACEDATAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfinspacedataglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace FinspaceData {

class FinspaceDataRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT FinspaceDataRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by FinspaceData.
    enum Action {
        AssociateUserToPermissionGroupAction,
        CreateChangesetAction,
        CreateDataViewAction,
        CreateDatasetAction,
        CreatePermissionGroupAction,
        CreateUserAction,
        DeleteDatasetAction,
        DeletePermissionGroupAction,
        DisableUserAction,
        DisassociateUserFromPermissionGroupAction,
        EnableUserAction,
        GetChangesetAction,
        GetDataViewAction,
        GetDatasetAction,
        GetExternalDataViewAccessDetailsAction,
        GetPermissionGroupAction,
        GetProgrammaticAccessCredentialsAction,
        GetUserAction,
        GetWorkingLocationAction,
        ListChangesetsAction,
        ListDataViewsAction,
        ListDatasetsAction,
        ListPermissionGroupsAction,
        ListPermissionGroupsByUserAction,
        ListUsersAction,
        ListUsersByPermissionGroupAction,
        ResetUserPasswordAction,
        UpdateChangesetAction,
        UpdateDatasetAction,
        UpdatePermissionGroupAction,
        UpdateUserAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FinspaceDataRequest(const Action action);
    FinspaceDataRequest(const FinspaceDataRequest &other);
    FinspaceDataRequest &operator=(const FinspaceDataRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FinspaceDataRequest &other) const;


protected:
    /// @cond internal
    explicit FinspaceDataRequest(FinspaceDataRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FinspaceDataRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
