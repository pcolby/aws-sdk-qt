// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEHEADERSPOLICYRESPONSE_P_H
#define QTAWS_DELETERESPONSEHEADERSPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteResponseHeadersPolicyResponse;

class DeleteResponseHeadersPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteResponseHeadersPolicyResponsePrivate(DeleteResponseHeadersPolicyResponse * const q);

    void parseDeleteResponseHeadersPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(DeleteResponseHeadersPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
