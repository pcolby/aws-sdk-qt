/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_TESTRENDERTEMPLATERESPONSE_P_H
#define QTAWS_TESTRENDERTEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace SES {

class TestRenderTemplateResponse;

class QTAWS_EXPORT TestRenderTemplateResponsePrivate : public SesResponsePrivate {

public:

    TestRenderTemplateResponsePrivate(TestRenderTemplateResponse * const q);

    void parseTestRenderTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestRenderTemplateResponse)
    Q_DISABLE_COPY(TestRenderTemplateResponsePrivate)

};

} // namespace SES
} // namespace QtAws

#endif
