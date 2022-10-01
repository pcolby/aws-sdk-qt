// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTVERSIONSRESPONSE_P_H
#define QTAWS_GETBOTVERSIONSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotVersionsResponse;

class GetBotVersionsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBotVersionsResponsePrivate(GetBotVersionsResponse * const q);

    void parseGetBotVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBotVersionsResponse)
    Q_DISABLE_COPY(GetBotVersionsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
