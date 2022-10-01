// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSRESPONSE_P_H
#define QTAWS_GETSAMPLEDREQUESTSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetSampledRequestsResponse;

class GetSampledRequestsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetSampledRequestsResponsePrivate(GetSampledRequestsResponse * const q);

    void parseGetSampledRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSampledRequestsResponse)
    Q_DISABLE_COPY(GetSampledRequestsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
