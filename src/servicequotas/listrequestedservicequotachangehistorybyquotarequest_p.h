// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTAREQUEST_P_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTAREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "listrequestedservicequotachangehistorybyquotarequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryByQuotaRequest;

class ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate(const ServiceQuotasRequest::Action action,
                                   ListRequestedServiceQuotaChangeHistoryByQuotaRequest * const q);
    ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate(const ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate &other,
                                   ListRequestedServiceQuotaChangeHistoryByQuotaRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRequestedServiceQuotaChangeHistoryByQuotaRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
