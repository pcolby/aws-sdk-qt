// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_P_H
#define QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class DeleteServiceQuotaIncreaseRequestFromTemplateResponse;

class DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate(DeleteServiceQuotaIncreaseRequestFromTemplateResponse * const q);

    void parseDeleteServiceQuotaIncreaseRequestFromTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceQuotaIncreaseRequestFromTemplateResponse)
    Q_DISABLE_COPY(DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
