// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOMATCHSETRESPONSE_P_H
#define QTAWS_CREATEGEOMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateGeoMatchSetResponse;

class CreateGeoMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateGeoMatchSetResponsePrivate(CreateGeoMatchSetResponse * const q);

    void parseCreateGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGeoMatchSetResponse)
    Q_DISABLE_COPY(CreateGeoMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
