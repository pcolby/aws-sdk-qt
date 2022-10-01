// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSRESPONSE_P_H
#define QTAWS_GETCHANGETOKENSTATUSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetChangeTokenStatusResponse;

class GetChangeTokenStatusResponsePrivate : public WafResponsePrivate {

public:

    explicit GetChangeTokenStatusResponsePrivate(GetChangeTokenStatusResponse * const q);

    void parseGetChangeTokenStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChangeTokenStatusResponse)
    Q_DISABLE_COPY(GetChangeTokenStatusResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
