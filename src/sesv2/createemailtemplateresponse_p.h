// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILTEMPLATERESPONSE_P_H
#define QTAWS_CREATEEMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailTemplateResponse;

class CreateEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateEmailTemplateResponsePrivate(CreateEmailTemplateResponse * const q);

    void parseCreateEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEmailTemplateResponse)
    Q_DISABLE_COPY(CreateEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
