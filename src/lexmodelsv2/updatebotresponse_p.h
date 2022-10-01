// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTRESPONSE_P_H
#define QTAWS_UPDATEBOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotResponse;

class UpdateBotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateBotResponsePrivate(UpdateBotResponse * const q);

    void parseUpdateBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBotResponse)
    Q_DISABLE_COPY(UpdateBotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
