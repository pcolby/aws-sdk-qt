// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H
#define QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetCustomVerificationEmailTemplateResponse;

class GetCustomVerificationEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetCustomVerificationEmailTemplateResponsePrivate(GetCustomVerificationEmailTemplateResponse * const q);

    void parseGetCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(GetCustomVerificationEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
