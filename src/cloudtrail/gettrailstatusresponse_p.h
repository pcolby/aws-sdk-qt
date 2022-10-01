// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILSTATUSRESPONSE_P_H
#define QTAWS_GETTRAILSTATUSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailStatusResponse;

class GetTrailStatusResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit GetTrailStatusResponsePrivate(GetTrailStatusResponse * const q);

    void parseGetTrailStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrailStatusResponse)
    Q_DISABLE_COPY(GetTrailStatusResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
