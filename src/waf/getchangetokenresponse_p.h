// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENRESPONSE_P_H
#define QTAWS_GETCHANGETOKENRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetChangeTokenResponse;

class GetChangeTokenResponsePrivate : public WafResponsePrivate {

public:

    explicit GetChangeTokenResponsePrivate(GetChangeTokenResponse * const q);

    void parseGetChangeTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChangeTokenResponse)
    Q_DISABLE_COPY(GetChangeTokenResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
