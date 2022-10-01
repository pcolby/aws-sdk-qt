// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEQUOTATEMPLATERESPONSE_P_H
#define QTAWS_ASSOCIATESERVICEQUOTATEMPLATERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class AssociateServiceQuotaTemplateResponse;

class AssociateServiceQuotaTemplateResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit AssociateServiceQuotaTemplateResponsePrivate(AssociateServiceQuotaTemplateResponse * const q);

    void parseAssociateServiceQuotaTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateServiceQuotaTemplateResponse)
    Q_DISABLE_COPY(AssociateServiceQuotaTemplateResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
