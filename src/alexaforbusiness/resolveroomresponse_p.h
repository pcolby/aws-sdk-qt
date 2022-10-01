// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEROOMRESPONSE_P_H
#define QTAWS_RESOLVEROOMRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ResolveRoomResponse;

class ResolveRoomResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ResolveRoomResponsePrivate(ResolveRoomResponse * const q);

    void parseResolveRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResolveRoomResponse)
    Q_DISABLE_COPY(ResolveRoomResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
