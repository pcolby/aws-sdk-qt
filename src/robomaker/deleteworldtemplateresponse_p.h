// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORLDTEMPLATERESPONSE_P_H
#define QTAWS_DELETEWORLDTEMPLATERESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DeleteWorldTemplateResponse;

class DeleteWorldTemplateResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DeleteWorldTemplateResponsePrivate(DeleteWorldTemplateResponse * const q);

    void parseDeleteWorldTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorldTemplateResponse)
    Q_DISABLE_COPY(DeleteWorldTemplateResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
