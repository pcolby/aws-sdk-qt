// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMERESPONSE_P_H
#define QTAWS_DELETEGAMERESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class DeleteGameResponse;

class DeleteGameResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit DeleteGameResponsePrivate(DeleteGameResponse * const q);

    void parseDeleteGameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGameResponse)
    Q_DISABLE_COPY(DeleteGameResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
