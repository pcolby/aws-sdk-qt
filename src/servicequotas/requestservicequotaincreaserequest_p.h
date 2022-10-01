// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSERVICEQUOTAINCREASEREQUEST_P_H
#define QTAWS_REQUESTSERVICEQUOTAINCREASEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "requestservicequotaincreaserequest.h"

namespace QtAws {
namespace ServiceQuotas {

class RequestServiceQuotaIncreaseRequest;

class RequestServiceQuotaIncreaseRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    RequestServiceQuotaIncreaseRequestPrivate(const ServiceQuotasRequest::Action action,
                                   RequestServiceQuotaIncreaseRequest * const q);
    RequestServiceQuotaIncreaseRequestPrivate(const RequestServiceQuotaIncreaseRequestPrivate &other,
                                   RequestServiceQuotaIncreaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestServiceQuotaIncreaseRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
