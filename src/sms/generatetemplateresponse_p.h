// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATETEMPLATERESPONSE_P_H
#define QTAWS_GENERATETEMPLATERESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GenerateTemplateResponse;

class GenerateTemplateResponsePrivate : public SmsResponsePrivate {

public:

    explicit GenerateTemplateResponsePrivate(GenerateTemplateResponse * const q);

    void parseGenerateTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateTemplateResponse)
    Q_DISABLE_COPY(GenerateTemplateResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
