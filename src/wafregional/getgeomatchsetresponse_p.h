// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOMATCHSETRESPONSE_P_H
#define QTAWS_GETGEOMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetGeoMatchSetResponse;

class GetGeoMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetGeoMatchSetResponsePrivate(GetGeoMatchSetResponse * const q);

    void parseGetGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGeoMatchSetResponse)
    Q_DISABLE_COPY(GetGeoMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
