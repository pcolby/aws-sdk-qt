// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HONEYCODEREQUEST_H
#define QTAWS_HONEYCODEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawshoneycodeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Honeycode {

class HoneycodeRequestPrivate;

class QTAWSHONEYCODE_EXPORT HoneycodeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Honeycode.
    enum Action {
        BatchCreateTableRowsAction,
        BatchDeleteTableRowsAction,
        BatchUpdateTableRowsAction,
        BatchUpsertTableRowsAction,
        DescribeTableDataImportJobAction,
        GetScreenDataAction,
        InvokeScreenAutomationAction,
        ListTableColumnsAction,
        ListTableRowsAction,
        ListTablesAction,
        ListTagsForResourceAction,
        QueryTableRowsAction,
        StartTableDataImportJobAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    HoneycodeRequest(const Action action);
    HoneycodeRequest(const HoneycodeRequest &other);
    HoneycodeRequest &operator=(const HoneycodeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const HoneycodeRequest &other) const;


protected:
    /// @cond internal
    explicit HoneycodeRequest(HoneycodeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HoneycodeRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
