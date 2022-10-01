// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDEREMAILTEMPLATERESPONSE_P_H
#define QTAWS_TESTRENDEREMAILTEMPLATERESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class TestRenderEmailTemplateResponse;

class TestRenderEmailTemplateResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit TestRenderEmailTemplateResponsePrivate(TestRenderEmailTemplateResponse * const q);

    void parseTestRenderEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestRenderEmailTemplateResponse)
    Q_DISABLE_COPY(TestRenderEmailTemplateResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
