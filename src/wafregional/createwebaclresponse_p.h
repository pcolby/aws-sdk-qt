// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLRESPONSE_P_H
#define QTAWS_CREATEWEBACLRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateWebACLResponse;

class CreateWebACLResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateWebACLResponsePrivate(CreateWebACLResponse * const q);

    void parseCreateWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWebACLResponse)
    Q_DISABLE_COPY(CreateWebACLResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
