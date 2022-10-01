// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBYTEMATCHSETRESPONSE_P_H
#define QTAWS_GETBYTEMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetByteMatchSetResponse;

class GetByteMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit GetByteMatchSetResponsePrivate(GetByteMatchSetResponse * const q);

    void parseGetByteMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetByteMatchSetResponse)
    Q_DISABLE_COPY(GetByteMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
