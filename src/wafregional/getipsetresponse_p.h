// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETRESPONSE_P_H
#define QTAWS_GETIPSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetIPSetResponse;

class GetIPSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetIPSetResponsePrivate(GetIPSetResponse * const q);

    void parseGetIPSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIPSetResponse)
    Q_DISABLE_COPY(GetIPSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
