// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILRESPONSE_P_H
#define QTAWS_GETTRAILRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailResponse;

class GetTrailResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit GetTrailResponsePrivate(GetTrailResponse * const q);

    void parseGetTrailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrailResponse)
    Q_DISABLE_COPY(GetTrailResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
