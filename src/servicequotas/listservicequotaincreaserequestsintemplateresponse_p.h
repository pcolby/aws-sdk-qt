// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATERESPONSE_P_H
#define QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotaIncreaseRequestsInTemplateResponse;

class ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate(ListServiceQuotaIncreaseRequestsInTemplateResponse * const q);

    void parseListServiceQuotaIncreaseRequestsInTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceQuotaIncreaseRequestsInTemplateResponse)
    Q_DISABLE_COPY(ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
