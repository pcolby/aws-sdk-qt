// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTRESPONSE_P_H
#define QTAWS_CREATEINTENTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateIntentResponse;

class CreateIntentResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateIntentResponsePrivate(CreateIntentResponse * const q);

    void parseCreateIntentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIntentResponse)
    Q_DISABLE_COPY(CreateIntentResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
