// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLAUNCHRESPONSE_P_H
#define QTAWS_STOPLAUNCHRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class StopLaunchResponse;

class StopLaunchResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit StopLaunchResponsePrivate(StopLaunchResponse * const q);

    void parseStopLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopLaunchResponse)
    Q_DISABLE_COPY(StopLaunchResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
