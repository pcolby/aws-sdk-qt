// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTARESPONSE_P_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTARESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryByQuotaResponse;

class ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate(ListRequestedServiceQuotaChangeHistoryByQuotaResponse * const q);

    void parseListRequestedServiceQuotaChangeHistoryByQuotaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRequestedServiceQuotaChangeHistoryByQuotaResponse)
    Q_DISABLE_COPY(ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
