// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPEVENTSRESPONSE_P_H
#define QTAWS_LOOKUPEVENTSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class LookupEventsResponse;

class LookupEventsResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit LookupEventsResponsePrivate(LookupEventsResponse * const q);

    void parseLookupEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LookupEventsResponse)
    Q_DISABLE_COPY(LookupEventsResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
