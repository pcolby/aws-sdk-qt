// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H
#define QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetCustomVerificationEmailTemplateResponse;

class GetCustomVerificationEmailTemplateResponsePrivate : public SesResponsePrivate {

public:

    explicit GetCustomVerificationEmailTemplateResponsePrivate(GetCustomVerificationEmailTemplateResponse * const q);

    void parseGetCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(GetCustomVerificationEmailTemplateResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
