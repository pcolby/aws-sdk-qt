// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTARESPONSE_P_H
#define QTAWS_GETSERVICEQUOTARESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaResponse;

class GetServiceQuotaResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit GetServiceQuotaResponsePrivate(GetServiceQuotaResponse * const q);

    void parseGetServiceQuotaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceQuotaResponse)
    Q_DISABLE_COPY(GetServiceQuotaResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
