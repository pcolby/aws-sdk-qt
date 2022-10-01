// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILTEMPLATERESPONSE_P_H
#define QTAWS_GETEMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetEmailTemplateResponse;

class GetEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetEmailTemplateResponsePrivate(GetEmailTemplateResponse * const q);

    void parseGetEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEmailTemplateResponse)
    Q_DISABLE_COPY(GetEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
