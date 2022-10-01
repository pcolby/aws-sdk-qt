// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEESRESPONSE_P_H
#define QTAWS_LISTATTENDEESRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListAttendeesResponse;

class ListAttendeesResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListAttendeesResponsePrivate(ListAttendeesResponse * const q);

    void parseListAttendeesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttendeesResponse)
    Q_DISABLE_COPY(ListAttendeesResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
