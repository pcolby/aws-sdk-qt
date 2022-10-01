// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTDATAREQUEST_H
#define QTAWS_REDSHIFTDATAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsredshiftdataglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace RedshiftData {

class RedshiftDataRequestPrivate;

class QTAWSREDSHIFTDATA_EXPORT RedshiftDataRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by RedshiftData.
    enum Action {
        BatchExecuteStatementAction,
        CancelStatementAction,
        DescribeStatementAction,
        DescribeTableAction,
        ExecuteStatementAction,
        GetStatementResultAction,
        ListDatabasesAction,
        ListSchemasAction,
        ListStatementsAction,
        ListTablesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RedshiftDataRequest(const Action action);
    RedshiftDataRequest(const RedshiftDataRequest &other);
    RedshiftDataRequest &operator=(const RedshiftDataRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RedshiftDataRequest &other) const;


protected:
    /// @cond internal
    explicit RedshiftDataRequest(RedshiftDataRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedshiftDataRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
