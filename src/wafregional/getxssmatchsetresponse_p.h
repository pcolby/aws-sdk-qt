// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETXSSMATCHSETRESPONSE_P_H
#define QTAWS_GETXSSMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetXssMatchSetResponse;

class GetXssMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetXssMatchSetResponsePrivate(GetXssMatchSetResponse * const q);

    void parseGetXssMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetXssMatchSetResponse)
    Q_DISABLE_COPY(GetXssMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
