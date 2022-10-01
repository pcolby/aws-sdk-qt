// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLRESPONSE_P_H
#define QTAWS_CREATEWEBACLRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class CreateWebACLResponse;

class CreateWebACLResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit CreateWebACLResponsePrivate(CreateWebACLResponse * const q);

    void parseCreateWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWebACLResponse)
    Q_DISABLE_COPY(CreateWebACLResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
