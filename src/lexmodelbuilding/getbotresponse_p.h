// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTRESPONSE_P_H
#define QTAWS_GETBOTRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotResponse;

class GetBotResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBotResponsePrivate(GetBotResponse * const q);

    void parseGetBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBotResponse)
    Q_DISABLE_COPY(GetBotResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
