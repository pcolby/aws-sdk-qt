// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOMATCHSETRESPONSE_P_H
#define QTAWS_DELETEGEOMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class DeleteGeoMatchSetResponse;

class DeleteGeoMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit DeleteGeoMatchSetResponsePrivate(DeleteGeoMatchSetResponse * const q);

    void parseDeleteGeoMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGeoMatchSetResponse)
    Q_DISABLE_COPY(DeleteGeoMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
