// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDRAFTAPPVERSIONTEMPLATERESPONSE_P_H
#define QTAWS_PUTDRAFTAPPVERSIONTEMPLATERESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class PutDraftAppVersionTemplateResponse;

class PutDraftAppVersionTemplateResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit PutDraftAppVersionTemplateResponsePrivate(PutDraftAppVersionTemplateResponse * const q);

    void parsePutDraftAppVersionTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDraftAppVersionTemplateResponse)
    Q_DISABLE_COPY(PutDraftAppVersionTemplateResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
