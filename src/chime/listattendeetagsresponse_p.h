// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEETAGSRESPONSE_P_H
#define QTAWS_LISTATTENDEETAGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListAttendeeTagsResponse;

class ListAttendeeTagsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListAttendeeTagsResponsePrivate(ListAttendeeTagsResponse * const q);

    void parseListAttendeeTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttendeeTagsResponse)
    Q_DISABLE_COPY(ListAttendeeTagsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
