// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATHENAREQUEST_H
#define QTAWS_ATHENAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsathenaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Athena {

class AthenaRequestPrivate;

class QTAWSATHENA_EXPORT AthenaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Athena.
    enum Action {
        BatchGetNamedQueryAction,
        BatchGetPreparedStatementAction,
        BatchGetQueryExecutionAction,
        CreateDataCatalogAction,
        CreateNamedQueryAction,
        CreatePreparedStatementAction,
        CreateWorkGroupAction,
        DeleteDataCatalogAction,
        DeleteNamedQueryAction,
        DeletePreparedStatementAction,
        DeleteWorkGroupAction,
        GetDataCatalogAction,
        GetDatabaseAction,
        GetNamedQueryAction,
        GetPreparedStatementAction,
        GetQueryExecutionAction,
        GetQueryResultsAction,
        GetQueryRuntimeStatisticsAction,
        GetTableMetadataAction,
        GetWorkGroupAction,
        ListDataCatalogsAction,
        ListDatabasesAction,
        ListEngineVersionsAction,
        ListNamedQueriesAction,
        ListPreparedStatementsAction,
        ListQueryExecutionsAction,
        ListTableMetadataAction,
        ListTagsForResourceAction,
        ListWorkGroupsAction,
        StartQueryExecutionAction,
        StopQueryExecutionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDataCatalogAction,
        UpdateNamedQueryAction,
        UpdatePreparedStatementAction,
        UpdateWorkGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AthenaRequest(const Action action);
    AthenaRequest(const AthenaRequest &other);
    AthenaRequest &operator=(const AthenaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AthenaRequest &other) const;


protected:
    /// @cond internal
    explicit AthenaRequest(AthenaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AthenaRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
