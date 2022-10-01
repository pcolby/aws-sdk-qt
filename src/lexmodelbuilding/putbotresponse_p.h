// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTRESPONSE_P_H
#define QTAWS_PUTBOTRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotResponse;

class PutBotResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit PutBotResponsePrivate(PutBotResponse * const q);

    void parsePutBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBotResponse)
    Q_DISABLE_COPY(PutBotResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
