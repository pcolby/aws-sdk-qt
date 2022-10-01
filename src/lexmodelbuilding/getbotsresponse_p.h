// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTSRESPONSE_P_H
#define QTAWS_GETBOTSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotsResponse;

class GetBotsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBotsResponsePrivate(GetBotsResponse * const q);

    void parseGetBotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBotsResponse)
    Q_DISABLE_COPY(GetBotsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
