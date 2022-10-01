// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTRESPONSE_P_H
#define QTAWS_DELETEBOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotResponse;

class DeleteBotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteBotResponsePrivate(DeleteBotResponse * const q);

    void parseDeleteBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBotResponse)
    Q_DISABLE_COPY(DeleteBotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
