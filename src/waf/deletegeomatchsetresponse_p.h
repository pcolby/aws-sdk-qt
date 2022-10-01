// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOMATCHSETRESPONSE_P_H
#define QTAWS_DELETEGEOMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteGeoMatchSetResponse;

class DeleteGeoMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteGeoMatchSetResponsePrivate(DeleteGeoMatchSetResponse * const q);

    void parseDeleteGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGeoMatchSetResponse)
    Q_DISABLE_COPY(DeleteGeoMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
