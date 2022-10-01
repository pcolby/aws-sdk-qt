// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESPONSEHEADERSPOLICYRESPONSE_P_H
#define QTAWS_CREATERESPONSEHEADERSPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateResponseHeadersPolicyResponse;

class CreateResponseHeadersPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateResponseHeadersPolicyResponsePrivate(CreateResponseHeadersPolicyResponse * const q);

    void parseCreateResponseHeadersPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(CreateResponseHeadersPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
