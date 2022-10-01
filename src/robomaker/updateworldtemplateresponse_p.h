// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORLDTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEWORLDTEMPLATERESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class UpdateWorldTemplateResponse;

class UpdateWorldTemplateResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit UpdateWorldTemplateResponsePrivate(UpdateWorldTemplateResponse * const q);

    void parseUpdateWorldTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorldTemplateResponse)
    Q_DISABLE_COPY(UpdateWorldTemplateResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
