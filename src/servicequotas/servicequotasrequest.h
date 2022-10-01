// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEQUOTASREQUEST_H
#define QTAWS_SERVICEQUOTASREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsservicequotasglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServiceQuotas {

class ServiceQuotasRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT ServiceQuotasRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ServiceQuotas.
    enum Action {
        AssociateServiceQuotaTemplateAction,
        DeleteServiceQuotaIncreaseRequestFromTemplateAction,
        DisassociateServiceQuotaTemplateAction,
        GetAWSDefaultServiceQuotaAction,
        GetAssociationForServiceQuotaTemplateAction,
        GetRequestedServiceQuotaChangeAction,
        GetServiceQuotaAction,
        GetServiceQuotaIncreaseRequestFromTemplateAction,
        ListAWSDefaultServiceQuotasAction,
        ListRequestedServiceQuotaChangeHistoryAction,
        ListRequestedServiceQuotaChangeHistoryByQuotaAction,
        ListServiceQuotaIncreaseRequestsInTemplateAction,
        ListServiceQuotasAction,
        ListServicesAction,
        ListTagsForResourceAction,
        PutServiceQuotaIncreaseRequestIntoTemplateAction,
        RequestServiceQuotaIncreaseAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ServiceQuotasRequest(const Action action);
    ServiceQuotasRequest(const ServiceQuotasRequest &other);
    ServiceQuotasRequest &operator=(const ServiceQuotasRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ServiceQuotasRequest &other) const;


protected:
    /// @cond internal
    explicit ServiceQuotasRequest(ServiceQuotasRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceQuotasRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
