// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTSRESPONSE_P_H
#define QTAWS_LISTSLOTSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotsResponse;

class ListSlotsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListSlotsResponsePrivate(ListSlotsResponse * const q);

    void parseListSlotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSlotsResponse)
    Q_DISABLE_COPY(ListSlotsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
