// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAILRESPONSE_P_H
#define QTAWS_UPDATETRAILRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class UpdateTrailResponse;

class UpdateTrailResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit UpdateTrailResponsePrivate(UpdateTrailResponse * const q);

    void parseUpdateTrailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrailResponse)
    Q_DISABLE_COPY(UpdateTrailResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
