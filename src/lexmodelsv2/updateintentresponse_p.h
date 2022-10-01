// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTENTRESPONSE_P_H
#define QTAWS_UPDATEINTENTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateIntentResponse;

class UpdateIntentResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateIntentResponsePrivate(UpdateIntentResponse * const q);

    void parseUpdateIntentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIntentResponse)
    Q_DISABLE_COPY(UpdateIntentResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
