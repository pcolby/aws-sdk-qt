// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEQUOTATEMPLATEREQUEST_P_H
#define QTAWS_ASSOCIATESERVICEQUOTATEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "associateservicequotatemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class AssociateServiceQuotaTemplateRequest;

class AssociateServiceQuotaTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    AssociateServiceQuotaTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   AssociateServiceQuotaTemplateRequest * const q);
    AssociateServiceQuotaTemplateRequestPrivate(const AssociateServiceQuotaTemplateRequestPrivate &other,
                                   AssociateServiceQuotaTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateServiceQuotaTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
