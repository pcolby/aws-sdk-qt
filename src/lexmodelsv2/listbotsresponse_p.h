// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSRESPONSE_P_H
#define QTAWS_LISTBOTSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotsResponse;

class ListBotsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListBotsResponsePrivate(ListBotsResponse * const q);

    void parseListBotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBotsResponse)
    Q_DISABLE_COPY(ListBotsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
