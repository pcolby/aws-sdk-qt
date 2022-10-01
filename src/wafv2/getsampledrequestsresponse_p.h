// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSRESPONSE_P_H
#define QTAWS_GETSAMPLEDREQUESTSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetSampledRequestsResponse;

class GetSampledRequestsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetSampledRequestsResponsePrivate(GetSampledRequestsResponse * const q);

    void parseGetSampledRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSampledRequestsResponse)
    Q_DISABLE_COPY(GetSampledRequestsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
