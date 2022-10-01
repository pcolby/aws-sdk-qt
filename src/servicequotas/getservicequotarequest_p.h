// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTAREQUEST_P_H
#define QTAWS_GETSERVICEQUOTAREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "getservicequotarequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaRequest;

class GetServiceQuotaRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    GetServiceQuotaRequestPrivate(const ServiceQuotasRequest::Action action,
                                   GetServiceQuotaRequest * const q);
    GetServiceQuotaRequestPrivate(const GetServiceQuotaRequestPrivate &other,
                                   GetServiceQuotaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceQuotaRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
