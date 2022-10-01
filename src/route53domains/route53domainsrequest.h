// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53DOMAINSREQUEST_H
#define QTAWS_ROUTE53DOMAINSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsroute53domainsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Route53Domains {

class Route53DomainsRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT Route53DomainsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Route53Domains.
    enum Action {
        AcceptDomainTransferFromAnotherAwsAccountAction,
        CancelDomainTransferToAnotherAwsAccountAction,
        CheckDomainAvailabilityAction,
        CheckDomainTransferabilityAction,
        DeleteDomainAction,
        DeleteTagsForDomainAction,
        DisableDomainAutoRenewAction,
        DisableDomainTransferLockAction,
        EnableDomainAutoRenewAction,
        EnableDomainTransferLockAction,
        GetContactReachabilityStatusAction,
        GetDomainDetailAction,
        GetDomainSuggestionsAction,
        GetOperationDetailAction,
        ListDomainsAction,
        ListOperationsAction,
        ListPricesAction,
        ListTagsForDomainAction,
        RegisterDomainAction,
        RejectDomainTransferFromAnotherAwsAccountAction,
        RenewDomainAction,
        ResendContactReachabilityEmailAction,
        RetrieveDomainAuthCodeAction,
        TransferDomainAction,
        TransferDomainToAnotherAwsAccountAction,
        UpdateDomainContactAction,
        UpdateDomainContactPrivacyAction,
        UpdateDomainNameserversAction,
        UpdateTagsForDomainAction,
        ViewBillingAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53DomainsRequest(const Action action);
    Route53DomainsRequest(const Route53DomainsRequest &other);
    Route53DomainsRequest &operator=(const Route53DomainsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53DomainsRequest &other) const;


protected:
    /// @cond internal
    explicit Route53DomainsRequest(Route53DomainsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53DomainsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
