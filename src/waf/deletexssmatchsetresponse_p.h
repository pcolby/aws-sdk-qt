// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEXSSMATCHSETRESPONSE_P_H
#define QTAWS_DELETEXSSMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteXssMatchSetResponse;

class DeleteXssMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteXssMatchSetResponsePrivate(DeleteXssMatchSetResponse * const q);

    void parseDeleteXssMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteXssMatchSetResponse)
    Q_DISABLE_COPY(DeleteXssMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
