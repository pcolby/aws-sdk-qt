// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTVERSIONRESPONSE_P_H
#define QTAWS_CREATEBOTVERSIONRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotVersionResponse;

class CreateBotVersionResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateBotVersionResponsePrivate(CreateBotVersionResponse * const q);

    void parseCreateBotVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBotVersionResponse)
    Q_DISABLE_COPY(CreateBotVersionResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
