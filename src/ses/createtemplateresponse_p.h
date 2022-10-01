// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATERESPONSE_P_H
#define QTAWS_CREATETEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CreateTemplateResponse;

class CreateTemplateResponsePrivate : public SesResponsePrivate {

public:

    explicit CreateTemplateResponsePrivate(CreateTemplateResponse * const q);

    void parseCreateTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTemplateResponse)
    Q_DISABLE_COPY(CreateTemplateResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
