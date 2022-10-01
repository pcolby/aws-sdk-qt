// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOMATCHSETRESPONSE_P_H
#define QTAWS_UPDATEGEOMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateGeoMatchSetResponse;

class UpdateGeoMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateGeoMatchSetResponsePrivate(UpdateGeoMatchSetResponse * const q);

    void parseUpdateGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGeoMatchSetResponse)
    Q_DISABLE_COPY(UpdateGeoMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
