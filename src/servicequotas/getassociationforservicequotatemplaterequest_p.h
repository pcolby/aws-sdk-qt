// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATEREQUEST_P_H
#define QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "getassociationforservicequotatemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAssociationForServiceQuotaTemplateRequest;

class GetAssociationForServiceQuotaTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    GetAssociationForServiceQuotaTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   GetAssociationForServiceQuotaTemplateRequest * const q);
    GetAssociationForServiceQuotaTemplateRequestPrivate(const GetAssociationForServiceQuotaTemplateRequestPrivate &other,
                                   GetAssociationForServiceQuotaTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssociationForServiceQuotaTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
