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

#ifndef QTAWS_APPSYNCREQUEST_H
#define QTAWS_APPSYNCREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsappsyncglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AppSync {

class AppSyncRequestPrivate;

class QTAWSAPPSYNC_EXPORT AppSyncRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AppSync.
    enum Action {
        CreateApiCacheAction,
        CreateApiKeyAction,
        CreateDataSourceAction,
        CreateFunctionAction,
        CreateGraphqlApiAction,
        CreateResolverAction,
        CreateTypeAction,
        DeleteApiCacheAction,
        DeleteApiKeyAction,
        DeleteDataSourceAction,
        DeleteFunctionAction,
        DeleteGraphqlApiAction,
        DeleteResolverAction,
        DeleteTypeAction,
        FlushApiCacheAction,
        GetApiCacheAction,
        GetDataSourceAction,
        GetFunctionAction,
        GetGraphqlApiAction,
        GetIntrospectionSchemaAction,
        GetResolverAction,
        GetSchemaCreationStatusAction,
        GetTypeAction,
        ListApiKeysAction,
        ListDataSourcesAction,
        ListFunctionsAction,
        ListGraphqlApisAction,
        ListResolversAction,
        ListResolversByFunctionAction,
        ListTagsForResourceAction,
        ListTypesAction,
        StartSchemaCreationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApiCacheAction,
        UpdateApiKeyAction,
        UpdateDataSourceAction,
        UpdateFunctionAction,
        UpdateGraphqlApiAction,
        UpdateResolverAction,
        UpdateTypeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppSyncRequest(const Action action);
    AppSyncRequest(const AppSyncRequest &other);
    AppSyncRequest &operator=(const AppSyncRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppSyncRequest &other) const;


protected:
    /// @cond internal
    AppSyncRequest(AppSyncRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppSyncRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
