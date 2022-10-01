// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBACLSRESPONSE_P_H
#define QTAWS_LISTWEBACLSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class ListWebACLsResponse;

class ListWebACLsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit ListWebACLsResponsePrivate(ListWebACLsResponse * const q);

    void parseListWebACLsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWebACLsResponse)
    Q_DISABLE_COPY(ListWebACLsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
