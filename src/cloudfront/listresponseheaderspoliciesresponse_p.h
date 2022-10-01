// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEHEADERSPOLICIESRESPONSE_P_H
#define QTAWS_LISTRESPONSEHEADERSPOLICIESRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListResponseHeadersPoliciesResponse;

class ListResponseHeadersPoliciesResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListResponseHeadersPoliciesResponsePrivate(ListResponseHeadersPoliciesResponse * const q);

    void parseListResponseHeadersPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResponseHeadersPoliciesResponse)
    Q_DISABLE_COPY(ListResponseHeadersPoliciesResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
