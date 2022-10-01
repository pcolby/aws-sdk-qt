// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMRESPONSE_P_H
#define QTAWS_CREATEROOMRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateRoomResponse;

class CreateRoomResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateRoomResponsePrivate(CreateRoomResponse * const q);

    void parseCreateRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRoomResponse)
    Q_DISABLE_COPY(CreateRoomResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
