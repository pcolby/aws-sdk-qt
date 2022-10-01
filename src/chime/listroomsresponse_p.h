// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMSRESPONSE_P_H
#define QTAWS_LISTROOMSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListRoomsResponse;

class ListRoomsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListRoomsResponsePrivate(ListRoomsResponse * const q);

    void parseListRoomsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoomsResponse)
    Q_DISABLE_COPY(ListRoomsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
