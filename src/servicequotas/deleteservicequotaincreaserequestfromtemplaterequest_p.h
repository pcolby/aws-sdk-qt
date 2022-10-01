// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_P_H
#define QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "deleteservicequotaincreaserequestfromtemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class DeleteServiceQuotaIncreaseRequestFromTemplateRequest;

class DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   DeleteServiceQuotaIncreaseRequestFromTemplateRequest * const q);
    DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate(const DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate &other,
                                   DeleteServiceQuotaIncreaseRequestFromTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceQuotaIncreaseRequestFromTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
