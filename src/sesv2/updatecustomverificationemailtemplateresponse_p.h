// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H
#define QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class UpdateCustomVerificationEmailTemplateResponse;

class UpdateCustomVerificationEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit UpdateCustomVerificationEmailTemplateResponsePrivate(UpdateCustomVerificationEmailTemplateResponse * const q);

    void parseUpdateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(UpdateCustomVerificationEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
