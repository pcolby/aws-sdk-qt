// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHEVENTSRESPONSE_P_H
#define QTAWS_CLOUDWATCHEVENTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class CloudWatchEventsResponse;

class CloudWatchEventsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudWatchEventsResponsePrivate(CloudWatchEventsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudWatchEventsResponse)
    Q_DISABLE_COPY(CloudWatchEventsResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
