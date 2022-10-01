// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATEREQUEST_P_H
#define QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "listservicequotaincreaserequestsintemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotaIncreaseRequestsInTemplateRequest;

class ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   ListServiceQuotaIncreaseRequestsInTemplateRequest * const q);
    ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate(const ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate &other,
                                   ListServiceQuotaIncreaseRequestsInTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceQuotaIncreaseRequestsInTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
