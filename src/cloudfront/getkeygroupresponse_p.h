// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPRESPONSE_P_H
#define QTAWS_GETKEYGROUPRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupResponse;

class GetKeyGroupResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetKeyGroupResponsePrivate(GetKeyGroupResponse * const q);

    void parseGetKeyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKeyGroupResponse)
    Q_DISABLE_COPY(GetKeyGroupResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
