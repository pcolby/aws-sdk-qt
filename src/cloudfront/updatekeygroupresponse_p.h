// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYGROUPRESPONSE_P_H
#define QTAWS_UPDATEKEYGROUPRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateKeyGroupResponse;

class UpdateKeyGroupResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateKeyGroupResponsePrivate(UpdateKeyGroupResponse * const q);

    void parseUpdateKeyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateKeyGroupResponse)
    Q_DISABLE_COPY(UpdateKeyGroupResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
