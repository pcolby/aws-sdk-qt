// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSDEFAULTSERVICEQUOTARESPONSE_P_H
#define QTAWS_GETAWSDEFAULTSERVICEQUOTARESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAWSDefaultServiceQuotaResponse;

class GetAWSDefaultServiceQuotaResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit GetAWSDefaultServiceQuotaResponsePrivate(GetAWSDefaultServiceQuotaResponse * const q);

    void parseGetAWSDefaultServiceQuotaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAWSDefaultServiceQuotaResponse)
    Q_DISABLE_COPY(GetAWSDefaultServiceQuotaResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
