// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATERESPONSE_P_H
#define QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class PutServiceQuotaIncreaseRequestIntoTemplateResponse;

class PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate(PutServiceQuotaIncreaseRequestIntoTemplateResponse * const q);

    void parsePutServiceQuotaIncreaseRequestIntoTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutServiceQuotaIncreaseRequestIntoTemplateResponse)
    Q_DISABLE_COPY(PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
