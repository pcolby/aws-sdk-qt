// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTALIASRESPONSE_P_H
#define QTAWS_DESCRIBEBOTALIASRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotAliasResponse;

class DescribeBotAliasResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeBotAliasResponsePrivate(DescribeBotAliasResponse * const q);

    void parseDescribeBotAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBotAliasResponse)
    Q_DISABLE_COPY(DescribeBotAliasResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
