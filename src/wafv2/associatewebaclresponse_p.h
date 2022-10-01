// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBACLRESPONSE_P_H
#define QTAWS_ASSOCIATEWEBACLRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class AssociateWebACLResponse;

class AssociateWebACLResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit AssociateWebACLResponsePrivate(AssociateWebACLResponse * const q);

    void parseAssociateWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWebACLResponse)
    Q_DISABLE_COPY(AssociateWebACLResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
