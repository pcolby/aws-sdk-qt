// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBACLRESPONSE_P_H
#define QTAWS_DISASSOCIATEWEBACLRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class DisassociateWebACLResponse;

class DisassociateWebACLResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit DisassociateWebACLResponsePrivate(DisassociateWebACLResponse * const q);

    void parseDisassociateWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWebACLResponse)
    Q_DISABLE_COPY(DisassociateWebACLResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
