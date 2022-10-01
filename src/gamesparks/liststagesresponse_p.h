// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGESRESPONSE_P_H
#define QTAWS_LISTSTAGESRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class ListStagesResponse;

class ListStagesResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit ListStagesResponsePrivate(ListStagesResponse * const q);

    void parseListStagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStagesResponse)
    Q_DISABLE_COPY(ListStagesResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
