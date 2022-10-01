// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORWEBACLRESPONSE_P_H
#define QTAWS_LISTRESOURCESFORWEBACLRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListResourcesForWebACLResponse;

class ListResourcesForWebACLResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListResourcesForWebACLResponsePrivate(ListResourcesForWebACLResponse * const q);

    void parseListResourcesForWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourcesForWebACLResponse)
    Q_DISABLE_COPY(ListResourcesForWebACLResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
