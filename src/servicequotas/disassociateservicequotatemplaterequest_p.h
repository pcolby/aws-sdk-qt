// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEQUOTATEMPLATEREQUEST_P_H
#define QTAWS_DISASSOCIATESERVICEQUOTATEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "disassociateservicequotatemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class DisassociateServiceQuotaTemplateRequest;

class DisassociateServiceQuotaTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    DisassociateServiceQuotaTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   DisassociateServiceQuotaTemplateRequest * const q);
    DisassociateServiceQuotaTemplateRequestPrivate(const DisassociateServiceQuotaTemplateRequestPrivate &other,
                                   DisassociateServiceQuotaTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceQuotaTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
