// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEEMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class UpdateEmailTemplateResponse;

class UpdateEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit UpdateEmailTemplateResponsePrivate(UpdateEmailTemplateResponse * const q);

    void parseUpdateEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEmailTemplateResponse)
    Q_DISABLE_COPY(UpdateEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
