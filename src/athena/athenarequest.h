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

#ifndef QTAWS_ATHENAREQUEST_H
#define QTAWS_ATHENAREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Athena {

class AthenaRequestPrivate;

class QTAWS_EXPORT AthenaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Athena.
    enum Action {
        BatchGetNamedQueryAction,
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
    AthenaRequest(AthenaRequestPrivate * const d);
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
