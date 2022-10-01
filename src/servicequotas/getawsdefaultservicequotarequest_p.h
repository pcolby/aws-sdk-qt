// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSDEFAULTSERVICEQUOTAREQUEST_P_H
#define QTAWS_GETAWSDEFAULTSERVICEQUOTAREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "getawsdefaultservicequotarequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAWSDefaultServiceQuotaRequest;

class GetAWSDefaultServiceQuotaRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    GetAWSDefaultServiceQuotaRequestPrivate(const ServiceQuotasRequest::Action action,
                                   GetAWSDefaultServiceQuotaRequest * const q);
    GetAWSDefaultServiceQuotaRequestPrivate(const GetAWSDefaultServiceQuotaRequestPrivate &other,
                                   GetAWSDefaultServiceQuotaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAWSDefaultServiceQuotaRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
