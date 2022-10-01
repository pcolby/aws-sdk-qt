// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCANARYRESPONSE_P_H
#define QTAWS_STOPCANARYRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class StopCanaryResponse;

class StopCanaryResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit StopCanaryResponsePrivate(StopCanaryResponse * const q);

    void parseStopCanaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopCanaryResponse)
    Q_DISABLE_COPY(StopCanaryResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
