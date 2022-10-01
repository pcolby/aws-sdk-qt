// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAILRESPONSE_P_H
#define QTAWS_CREATETRAILRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class CreateTrailResponse;

class CreateTrailResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit CreateTrailResponsePrivate(CreateTrailResponse * const q);

    void parseCreateTrailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrailResponse)
    Q_DISABLE_COPY(CreateTrailResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
