// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        AssociateApiAction,
        CreateApiCacheAction,
        CreateApiKeyAction,
        CreateDataSourceAction,
        CreateDomainNameAction,
        CreateFunctionAction,
        CreateGraphqlApiAction,
        CreateResolverAction,
        CreateTypeAction,
        DeleteApiCacheAction,
        DeleteApiKeyAction,
        DeleteDataSourceAction,
        DeleteDomainNameAction,
        DeleteFunctionAction,
        DeleteGraphqlApiAction,
        DeleteResolverAction,
        DeleteTypeAction,
        DisassociateApiAction,
        EvaluateMappingTemplateAction,
        FlushApiCacheAction,
        GetApiAssociationAction,
        GetApiCacheAction,
        GetDataSourceAction,
        GetDomainNameAction,
        GetFunctionAction,
        GetGraphqlApiAction,
        GetIntrospectionSchemaAction,
        GetResolverAction,
        GetSchemaCreationStatusAction,
        GetTypeAction,
        ListApiKeysAction,
        ListDataSourcesAction,
        ListDomainNamesAction,
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
        UpdateDomainNameAction,
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
    explicit AppSyncRequest(AppSyncRequestPrivate * const d);
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
