// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTRESPONSE_P_H
#define QTAWS_CREATEBOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotResponse;

class CreateBotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateBotResponsePrivate(CreateBotResponse * const q);

    void parseCreateBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBotResponse)
    Q_DISABLE_COPY(CreateBotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
