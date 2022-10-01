// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSELECTORSRESPONSE_P_H
#define QTAWS_GETEVENTSELECTORSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class GetEventSelectorsResponse;

class GetEventSelectorsResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit GetEventSelectorsResponsePrivate(GetEventSelectorsResponse * const q);

    void parseGetEventSelectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventSelectorsResponse)
    Q_DISABLE_COPY(GetEventSelectorsResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
