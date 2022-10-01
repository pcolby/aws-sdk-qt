// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTRESPONSE_P_H
#define QTAWS_DESCRIBEBOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotResponse;

class DescribeBotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeBotResponsePrivate(DescribeBotResponse * const q);

    void parseDescribeBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBotResponse)
    Q_DISABLE_COPY(DescribeBotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
