// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSELECTORSRESPONSE_P_H
#define QTAWS_PUTEVENTSELECTORSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class PutEventSelectorsResponse;

class PutEventSelectorsResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit PutEventSelectorsResponsePrivate(PutEventSelectorsResponse * const q);

    void parsePutEventSelectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEventSelectorsResponse)
    Q_DISABLE_COPY(PutEventSelectorsResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
