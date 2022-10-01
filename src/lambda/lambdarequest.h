// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAMBDAREQUEST_H
#define QTAWS_LAMBDAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslambdaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Lambda {

class LambdaRequestPrivate;

class QTAWSLAMBDA_EXPORT LambdaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Lambda.
    enum Action {
        AddLayerVersionPermissionAction,
        AddPermissionAction,
        CreateAliasAction,
        CreateCodeSigningConfigAction,
        CreateEventSourceMappingAction,
        CreateFunctionAction,
        CreateFunctionUrlConfigAction,
        DeleteAliasAction,
        DeleteCodeSigningConfigAction,
        DeleteEventSourceMappingAction,
        DeleteFunctionAction,
        DeleteFunctionCodeSigningConfigAction,
        DeleteFunctionConcurrencyAction,
        DeleteFunctionEventInvokeConfigAction,
        DeleteFunctionUrlConfigAction,
        DeleteLayerVersionAction,
        DeleteProvisionedConcurrencyConfigAction,
        GetAccountSettingsAction,
        GetAliasAction,
        GetCodeSigningConfigAction,
        GetEventSourceMappingAction,
        GetFunctionAction,
        GetFunctionCodeSigningConfigAction,
        GetFunctionConcurrencyAction,
        GetFunctionConfigurationAction,
        GetFunctionEventInvokeConfigAction,
        GetFunctionUrlConfigAction,
        GetLayerVersionAction,
        GetLayerVersionByArnAction,
        GetLayerVersionPolicyAction,
        GetPolicyAction,
        GetProvisionedConcurrencyConfigAction,
        InvokeAction,
        InvokeAsyncAction,
        ListAliasesAction,
        ListCodeSigningConfigsAction,
        ListEventSourceMappingsAction,
        ListFunctionEventInvokeConfigsAction,
        ListFunctionUrlConfigsAction,
        ListFunctionsAction,
        ListFunctionsByCodeSigningConfigAction,
        ListLayerVersionsAction,
        ListLayersAction,
        ListProvisionedConcurrencyConfigsAction,
        ListTagsAction,
        ListVersionsByFunctionAction,
        PublishLayerVersionAction,
        PublishVersionAction,
        PutFunctionCodeSigningConfigAction,
        PutFunctionConcurrencyAction,
        PutFunctionEventInvokeConfigAction,
        PutProvisionedConcurrencyConfigAction,
        RemoveLayerVersionPermissionAction,
        RemovePermissionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAliasAction,
        UpdateCodeSigningConfigAction,
        UpdateEventSourceMappingAction,
        UpdateFunctionCodeAction,
        UpdateFunctionConfigurationAction,
        UpdateFunctionEventInvokeConfigAction,
        UpdateFunctionUrlConfigAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LambdaRequest(const Action action);
    LambdaRequest(const LambdaRequest &other);
    LambdaRequest &operator=(const LambdaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LambdaRequest &other) const;


protected:
    /// @cond internal
    explicit LambdaRequest(LambdaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LambdaRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
