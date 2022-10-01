// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYRESPONSE_P_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYRESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryResponse;

class ListRequestedServiceQuotaChangeHistoryResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit ListRequestedServiceQuotaChangeHistoryResponsePrivate(ListRequestedServiceQuotaChangeHistoryResponse * const q);

    void parseListRequestedServiceQuotaChangeHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRequestedServiceQuotaChangeHistoryResponse)
    Q_DISABLE_COPY(ListRequestedServiceQuotaChangeHistoryResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
