// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEQUOTATEMPLATERESPONSE_P_H
#define QTAWS_DISASSOCIATESERVICEQUOTATEMPLATERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class DisassociateServiceQuotaTemplateResponse;

class DisassociateServiceQuotaTemplateResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit DisassociateServiceQuotaTemplateResponsePrivate(DisassociateServiceQuotaTemplateResponse * const q);

    void parseDisassociateServiceQuotaTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceQuotaTemplateResponse)
    Q_DISABLE_COPY(DisassociateServiceQuotaTemplateResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
