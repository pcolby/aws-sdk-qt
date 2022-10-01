// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOMATCHSETRESPONSE_P_H
#define QTAWS_CREATEGEOMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateGeoMatchSetResponse;

class CreateGeoMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateGeoMatchSetResponsePrivate(CreateGeoMatchSetResponse * const q);

    void parseCreateGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGeoMatchSetResponse)
    Q_DISABLE_COPY(CreateGeoMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
