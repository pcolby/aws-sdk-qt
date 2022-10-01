// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOMATCHSETRESPONSE_P_H
#define QTAWS_GETGEOMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetGeoMatchSetResponse;

class GetGeoMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit GetGeoMatchSetResponsePrivate(GetGeoMatchSetResponse * const q);

    void parseGetGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGeoMatchSetResponse)
    Q_DISABLE_COPY(GetGeoMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
