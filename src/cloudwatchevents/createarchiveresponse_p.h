// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVERESPONSE_P_H
#define QTAWS_CREATEARCHIVERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreateArchiveResponse;

class CreateArchiveResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit CreateArchiveResponsePrivate(CreateArchiveResponse * const q);

    void parseCreateArchiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateArchiveResponse)
    Q_DISABLE_COPY(CreateArchiveResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
