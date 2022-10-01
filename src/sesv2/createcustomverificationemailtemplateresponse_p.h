// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateCustomVerificationEmailTemplateResponse;

class CreateCustomVerificationEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateCustomVerificationEmailTemplateResponsePrivate(CreateCustomVerificationEmailTemplateResponse * const q);

    void parseCreateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(CreateCustomVerificationEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
