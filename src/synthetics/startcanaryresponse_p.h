// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCANARYRESPONSE_P_H
#define QTAWS_STARTCANARYRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class StartCanaryResponse;

class StartCanaryResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit StartCanaryResponsePrivate(StartCanaryResponse * const q);

    void parseStartCanaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCanaryResponse)
    Q_DISABLE_COPY(StartCanaryResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
