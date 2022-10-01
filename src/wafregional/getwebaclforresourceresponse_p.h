// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLFORRESOURCERESPONSE_P_H
#define QTAWS_GETWEBACLFORRESOURCERESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetWebACLForResourceResponse;

class GetWebACLForResourceResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetWebACLForResourceResponsePrivate(GetWebACLForResourceResponse * const q);

    void parseGetWebACLForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWebACLForResourceResponse)
    Q_DISABLE_COPY(GetWebACLForResourceResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
