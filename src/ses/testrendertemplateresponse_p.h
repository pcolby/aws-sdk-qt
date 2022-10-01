// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDERTEMPLATERESPONSE_P_H
#define QTAWS_TESTRENDERTEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class TestRenderTemplateResponse;

class TestRenderTemplateResponsePrivate : public SesResponsePrivate {

public:

    explicit TestRenderTemplateResponsePrivate(TestRenderTemplateResponse * const q);

    void parseTestRenderTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestRenderTemplateResponse)
    Q_DISABLE_COPY(TestRenderTemplateResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
