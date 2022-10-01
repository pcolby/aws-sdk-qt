// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDTEMPLATERESPONSE_P_H
#define QTAWS_CREATEWORLDTEMPLATERESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldTemplateResponse;

class CreateWorldTemplateResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateWorldTemplateResponsePrivate(CreateWorldTemplateResponse * const q);

    void parseCreateWorldTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorldTemplateResponse)
    Q_DISABLE_COPY(CreateWorldTemplateResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
