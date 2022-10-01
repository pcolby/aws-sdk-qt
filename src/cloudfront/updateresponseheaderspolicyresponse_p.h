// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESPONSEHEADERSPOLICYRESPONSE_P_H
#define QTAWS_UPDATERESPONSEHEADERSPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateResponseHeadersPolicyResponse;

class UpdateResponseHeadersPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateResponseHeadersPolicyResponsePrivate(UpdateResponseHeadersPolicyResponse * const q);

    void parseUpdateResponseHeadersPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(UpdateResponseHeadersPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
