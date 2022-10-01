// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KEYSPACESREQUEST_H
#define QTAWS_KEYSPACESREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskeyspacesglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Keyspaces {

class KeyspacesRequestPrivate;

class QTAWSKEYSPACES_EXPORT KeyspacesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Keyspaces.
    enum Action {
        CreateKeyspaceAction,
        CreateTableAction,
        DeleteKeyspaceAction,
        DeleteTableAction,
        GetKeyspaceAction,
        GetTableAction,
        ListKeyspacesAction,
        ListTablesAction,
        ListTagsForResourceAction,
        RestoreTableAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateTableAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KeyspacesRequest(const Action action);
    KeyspacesRequest(const KeyspacesRequest &other);
    KeyspacesRequest &operator=(const KeyspacesRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KeyspacesRequest &other) const;


protected:
    /// @cond internal
    explicit KeyspacesRequest(KeyspacesRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KeyspacesRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
