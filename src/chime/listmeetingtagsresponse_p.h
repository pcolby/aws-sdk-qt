// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEETINGTAGSRESPONSE_P_H
#define QTAWS_LISTMEETINGTAGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListMeetingTagsResponse;

class ListMeetingTagsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListMeetingTagsResponsePrivate(ListMeetingTagsResponse * const q);

    void parseListMeetingTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMeetingTagsResponse)
    Q_DISABLE_COPY(ListMeetingTagsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
