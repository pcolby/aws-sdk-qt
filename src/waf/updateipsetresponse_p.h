// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPSETRESPONSE_P_H
#define QTAWS_UPDATEIPSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateIPSetResponse;

class UpdateIPSetResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateIPSetResponsePrivate(UpdateIPSetResponse * const q);

    void parseUpdateIPSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIPSetResponse)
    Q_DISABLE_COPY(UpdateIPSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
