// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONRESPONSE_P_H
#define QTAWS_PUTDESTINATIONRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationResponse;

class PutDestinationResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit PutDestinationResponsePrivate(PutDestinationResponse * const q);

    void parsePutDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDestinationResponse)
    Q_DISABLE_COPY(PutDestinationResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
