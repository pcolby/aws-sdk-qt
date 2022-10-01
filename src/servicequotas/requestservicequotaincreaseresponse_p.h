// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSERVICEQUOTAINCREASERESPONSE_P_H
#define QTAWS_REQUESTSERVICEQUOTAINCREASERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class RequestServiceQuotaIncreaseResponse;

class RequestServiceQuotaIncreaseResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit RequestServiceQuotaIncreaseResponsePrivate(RequestServiceQuotaIncreaseResponse * const q);

    void parseRequestServiceQuotaIncreaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestServiceQuotaIncreaseResponse)
    Q_DISABLE_COPY(RequestServiceQuotaIncreaseResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
