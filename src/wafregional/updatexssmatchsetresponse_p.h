// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEXSSMATCHSETRESPONSE_P_H
#define QTAWS_UPDATEXSSMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class UpdateXssMatchSetResponse;

class UpdateXssMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit UpdateXssMatchSetResponsePrivate(UpdateXssMatchSetResponse * const q);

    void parseUpdateXssMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateXssMatchSetResponse)
    Q_DISABLE_COPY(UpdateXssMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
