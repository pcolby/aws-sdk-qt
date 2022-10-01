// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAILRESPONSE_P_H
#define QTAWS_DELETETRAILRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class DeleteTrailResponse;

class DeleteTrailResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit DeleteTrailResponsePrivate(DeleteTrailResponse * const q);

    void parseDeleteTrailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrailResponse)
    Q_DISABLE_COPY(DeleteTrailResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
