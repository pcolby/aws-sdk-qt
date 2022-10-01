// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUILDBOTLOCALERESPONSE_P_H
#define QTAWS_BUILDBOTLOCALERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class BuildBotLocaleResponse;

class BuildBotLocaleResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit BuildBotLocaleResponsePrivate(BuildBotLocaleResponse * const q);

    void parseBuildBotLocaleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BuildBotLocaleResponse)
    Q_DISABLE_COPY(BuildBotLocaleResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
