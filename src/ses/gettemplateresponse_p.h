// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATERESPONSE_P_H
#define QTAWS_GETTEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetTemplateResponse;

class GetTemplateResponsePrivate : public SesResponsePrivate {

public:

    explicit GetTemplateResponsePrivate(GetTemplateResponse * const q);

    void parseGetTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTemplateResponse)
    Q_DISABLE_COPY(GetTemplateResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
