// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTVERSIONRESPONSE_P_H
#define QTAWS_DESCRIBEBOTVERSIONRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotVersionResponse;

class DescribeBotVersionResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeBotVersionResponsePrivate(DescribeBotVersionResponse * const q);

    void parseDescribeBotVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBotVersionResponse)
    Q_DISABLE_COPY(DescribeBotVersionResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
