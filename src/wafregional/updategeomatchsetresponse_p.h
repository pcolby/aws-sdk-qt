// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOMATCHSETRESPONSE_P_H
#define QTAWS_UPDATEGEOMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class UpdateGeoMatchSetResponse;

class UpdateGeoMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit UpdateGeoMatchSetResponsePrivate(UpdateGeoMatchSetResponse * const q);

    void parseUpdateGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGeoMatchSetResponse)
    Q_DISABLE_COPY(UpdateGeoMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
