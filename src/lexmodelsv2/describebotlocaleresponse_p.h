// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTLOCALERESPONSE_P_H
#define QTAWS_DESCRIBEBOTLOCALERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotLocaleResponse;

class DescribeBotLocaleResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeBotLocaleResponsePrivate(DescribeBotLocaleResponse * const q);

    void parseDescribeBotLocaleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBotLocaleResponse)
    Q_DISABLE_COPY(DescribeBotLocaleResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
