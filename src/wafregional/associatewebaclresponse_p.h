// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBACLRESPONSE_P_H
#define QTAWS_ASSOCIATEWEBACLRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class AssociateWebACLResponse;

class AssociateWebACLResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit AssociateWebACLResponsePrivate(AssociateWebACLResponse * const q);

    void parseAssociateWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWebACLResponse)
    Q_DISABLE_COPY(AssociateWebACLResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
