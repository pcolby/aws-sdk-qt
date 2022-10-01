// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETXSSMATCHSETRESPONSE_P_H
#define QTAWS_GETXSSMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetXssMatchSetResponse;

class GetXssMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit GetXssMatchSetResponsePrivate(GetXssMatchSetResponse * const q);

    void parseGetXssMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetXssMatchSetResponse)
    Q_DISABLE_COPY(GetXssMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
