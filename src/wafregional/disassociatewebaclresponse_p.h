// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBACLRESPONSE_P_H
#define QTAWS_DISASSOCIATEWEBACLRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class DisassociateWebACLResponse;

class DisassociateWebACLResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit DisassociateWebACLResponsePrivate(DisassociateWebACLResponse * const q);

    void parseDisassociateWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWebACLResponse)
    Q_DISABLE_COPY(DisassociateWebACLResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
