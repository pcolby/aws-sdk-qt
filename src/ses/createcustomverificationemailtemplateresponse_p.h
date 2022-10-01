// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CreateCustomVerificationEmailTemplateResponse;

class CreateCustomVerificationEmailTemplateResponsePrivate : public SesResponsePrivate {

public:

    explicit CreateCustomVerificationEmailTemplateResponsePrivate(CreateCustomVerificationEmailTemplateResponse * const q);

    void parseCreateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(CreateCustomVerificationEmailTemplateResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
