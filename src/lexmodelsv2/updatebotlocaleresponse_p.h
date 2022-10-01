// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTLOCALERESPONSE_P_H
#define QTAWS_UPDATEBOTLOCALERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotLocaleResponse;

class UpdateBotLocaleResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateBotLocaleResponsePrivate(UpdateBotLocaleResponse * const q);

    void parseUpdateBotLocaleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBotLocaleResponse)
    Q_DISABLE_COPY(UpdateBotLocaleResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
