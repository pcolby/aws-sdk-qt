// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYREQUEST_P_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "listrequestedservicequotachangehistoryrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryRequest;

class ListRequestedServiceQuotaChangeHistoryRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    ListRequestedServiceQuotaChangeHistoryRequestPrivate(const ServiceQuotasRequest::Action action,
                                   ListRequestedServiceQuotaChangeHistoryRequest * const q);
    ListRequestedServiceQuotaChangeHistoryRequestPrivate(const ListRequestedServiceQuotaChangeHistoryRequestPrivate &other,
                                   ListRequestedServiceQuotaChangeHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRequestedServiceQuotaChangeHistoryRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
