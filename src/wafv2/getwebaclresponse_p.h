// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLRESPONSE_P_H
#define QTAWS_GETWEBACLRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetWebACLResponse;

class GetWebACLResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetWebACLResponsePrivate(GetWebACLResponse * const q);

    void parseGetWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWebACLResponse)
    Q_DISABLE_COPY(GetWebACLResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
