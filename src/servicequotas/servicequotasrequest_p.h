// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEQUOTASREQUEST_P_H
#define QTAWS_SERVICEQUOTASREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ServiceQuotasRequest;

class ServiceQuotasRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ServiceQuotasRequest::Action action; ///< ServiceQuotas action to be performed.
    QString apiVersion;        ///< ServiceQuotas API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServiceQuotas request (query string) parameters. @todo?

    ServiceQuotasRequestPrivate(const ServiceQuotasRequest::Action action, ServiceQuotasRequest * const q);
    ServiceQuotasRequestPrivate(const ServiceQuotasRequestPrivate &other, ServiceQuotasRequest * const q);

    static QString toString(const ServiceQuotasRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServiceQuotasRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
