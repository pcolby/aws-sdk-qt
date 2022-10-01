// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_P_H
#define QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaIncreaseRequestFromTemplateResponse;

class GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate(GetServiceQuotaIncreaseRequestFromTemplateResponse * const q);

    void parseGetServiceQuotaIncreaseRequestFromTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceQuotaIncreaseRequestFromTemplateResponse)
    Q_DISABLE_COPY(GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
