// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNEREVENTSOURCERESPONSE_P_H
#define QTAWS_DELETEPARTNEREVENTSOURCERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeletePartnerEventSourceResponse;

class DeletePartnerEventSourceResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DeletePartnerEventSourceResponsePrivate(DeletePartnerEventSourceResponse * const q);

    void parseDeletePartnerEventSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePartnerEventSourceResponse)
    Q_DISABLE_COPY(DeletePartnerEventSourceResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
