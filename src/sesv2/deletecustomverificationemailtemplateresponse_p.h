// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H
#define QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class DeleteCustomVerificationEmailTemplateResponse;

class DeleteCustomVerificationEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit DeleteCustomVerificationEmailTemplateResponsePrivate(DeleteCustomVerificationEmailTemplateResponse * const q);

    void parseDeleteCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(DeleteCustomVerificationEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
