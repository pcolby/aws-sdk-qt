// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORLDTEMPLATEBODYRESPONSE_P_H
#define QTAWS_GETWORLDTEMPLATEBODYRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class GetWorldTemplateBodyResponse;

class GetWorldTemplateBodyResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit GetWorldTemplateBodyResponsePrivate(GetWorldTemplateBodyResponse * const q);

    void parseGetWorldTemplateBodyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorldTemplateBodyResponse)
    Q_DISABLE_COPY(GetWorldTemplateBodyResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
