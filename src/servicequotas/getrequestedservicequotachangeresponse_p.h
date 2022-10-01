// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTEDSERVICEQUOTACHANGERESPONSE_P_H
#define QTAWS_GETREQUESTEDSERVICEQUOTACHANGERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class GetRequestedServiceQuotaChangeResponse;

class GetRequestedServiceQuotaChangeResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit GetRequestedServiceQuotaChangeResponsePrivate(GetRequestedServiceQuotaChangeResponse * const q);

    void parseGetRequestedServiceQuotaChangeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRequestedServiceQuotaChangeResponse)
    Q_DISABLE_COPY(GetRequestedServiceQuotaChangeResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
