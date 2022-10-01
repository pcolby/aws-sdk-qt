// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATEREQUEST_P_H
#define QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "putservicequotaincreaserequestintotemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class PutServiceQuotaIncreaseRequestIntoTemplateRequest;

class PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   PutServiceQuotaIncreaseRequestIntoTemplateRequest * const q);
    PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(const PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate &other,
                                   PutServiceQuotaIncreaseRequestIntoTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutServiceQuotaIncreaseRequestIntoTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
