// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETRESPONSE_P_H
#define QTAWS_GETIPSETRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetIPSetResponse;

class GetIPSetResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetIPSetResponsePrivate(GetIPSetResponse * const q);

    void parseGetIPSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIPSetResponse)
    Q_DISABLE_COPY(GetIPSetResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
