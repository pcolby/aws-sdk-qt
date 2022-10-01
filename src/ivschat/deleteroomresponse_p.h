// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMRESPONSE_P_H
#define QTAWS_DELETEROOMRESPONSE_P_H

#include "ivschatresponse_p.h"

namespace QtAws {
namespace IvsChat {

class DeleteRoomResponse;

class DeleteRoomResponsePrivate : public IvsChatResponsePrivate {

public:

    explicit DeleteRoomResponsePrivate(DeleteRoomResponse * const q);

    void parseDeleteRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRoomResponse)
    Q_DISABLE_COPY(DeleteRoomResponsePrivate)

};

} // namespace IvsChat
} // namespace QtAws

#endif
