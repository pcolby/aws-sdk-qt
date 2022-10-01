// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDTEMPLATESRESPONSE_P_H
#define QTAWS_LISTWORLDTEMPLATESRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldTemplatesResponse;

class ListWorldTemplatesResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListWorldTemplatesResponsePrivate(ListWorldTemplatesResponse * const q);

    void parseListWorldTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorldTemplatesResponse)
    Q_DISABLE_COPY(ListWorldTemplatesResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
