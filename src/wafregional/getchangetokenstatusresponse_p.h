// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSRESPONSE_P_H
#define QTAWS_GETCHANGETOKENSTATUSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetChangeTokenStatusResponse;

class GetChangeTokenStatusResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetChangeTokenStatusResponsePrivate(GetChangeTokenStatusResponse * const q);

    void parseGetChangeTokenStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChangeTokenStatusResponse)
    Q_DISABLE_COPY(GetChangeTokenStatusResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
