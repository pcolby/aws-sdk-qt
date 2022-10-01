// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATERESPONSE_P_H
#define QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATERESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAssociationForServiceQuotaTemplateResponse;

class GetAssociationForServiceQuotaTemplateResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit GetAssociationForServiceQuotaTemplateResponsePrivate(GetAssociationForServiceQuotaTemplateResponse * const q);

    void parseGetAssociationForServiceQuotaTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssociationForServiceQuotaTemplateResponse)
    Q_DISABLE_COPY(GetAssociationForServiceQuotaTemplateResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
