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
        DeleteAliasAction,
        DeleteCodeSigningConfigAction,
        DeleteEventSourceMappingAction,
        DeleteFunctionAction,
        DeleteFunctionCodeSigningConfigAction,
        DeleteFunctionConcurrencyAction,
        DeleteFunctionEventInvokeConfigAction,
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
    LambdaRequestPrivate * const d_ptr; ///< Internal d-pointer.
    LambdaRequest(LambdaRequestPrivate * const d);
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
