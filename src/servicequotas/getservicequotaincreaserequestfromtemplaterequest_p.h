// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_P_H
#define QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "getservicequotaincreaserequestfromtemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaIncreaseRequestFromTemplateRequest;

class GetServiceQuotaIncreaseRequestFromTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    GetServiceQuotaIncreaseRequestFromTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   GetServiceQuotaIncreaseRequestFromTemplateRequest * const q);
    GetServiceQuotaIncreaseRequestFromTemplateRequestPrivate(const GetServiceQuotaIncreaseRequestFromTemplateRequestPrivate &other,
                                   GetServiceQuotaIncreaseRequestFromTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceQuotaIncreaseRequestFromTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
