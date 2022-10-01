// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEETINGSRESPONSE_P_H
#define QTAWS_LISTMEETINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListMeetingsResponse;

class ListMeetingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListMeetingsResponsePrivate(ListMeetingsResponse * const q);

    void parseListMeetingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMeetingsResponse)
    Q_DISABLE_COPY(ListMeetingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
