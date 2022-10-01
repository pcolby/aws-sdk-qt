// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEXSSMATCHSETRESPONSE_P_H
#define QTAWS_CREATEXSSMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateXssMatchSetResponse;

class CreateXssMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateXssMatchSetResponsePrivate(CreateXssMatchSetResponse * const q);

    void parseCreateXssMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateXssMatchSetResponse)
    Q_DISABLE_COPY(CreateXssMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
