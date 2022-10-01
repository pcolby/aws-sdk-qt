// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVESRESPONSE_P_H
#define QTAWS_LISTARCHIVESRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListArchivesResponse;

class ListArchivesResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit ListArchivesResponsePrivate(ListArchivesResponse * const q);

    void parseListArchivesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListArchivesResponse)
    Q_DISABLE_COPY(ListArchivesResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
