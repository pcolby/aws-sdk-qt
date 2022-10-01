// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLRESPONSE_P_H
#define QTAWS_UPDATEWEBACLRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class UpdateWebACLResponse;

class UpdateWebACLResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit UpdateWebACLResponsePrivate(UpdateWebACLResponse * const q);

    void parseUpdateWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWebACLResponse)
    Q_DISABLE_COPY(UpdateWebACLResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
