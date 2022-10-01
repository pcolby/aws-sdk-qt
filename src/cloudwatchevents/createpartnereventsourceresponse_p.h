// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTNEREVENTSOURCERESPONSE_P_H
#define QTAWS_CREATEPARTNEREVENTSOURCERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreatePartnerEventSourceResponse;

class CreatePartnerEventSourceResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit CreatePartnerEventSourceResponsePrivate(CreatePartnerEventSourceResponse * const q);

    void parseCreatePartnerEventSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePartnerEventSourceResponse)
    Q_DISABLE_COPY(CreatePartnerEventSourceResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
