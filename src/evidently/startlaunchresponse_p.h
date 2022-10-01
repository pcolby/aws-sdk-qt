// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLAUNCHRESPONSE_P_H
#define QTAWS_STARTLAUNCHRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class StartLaunchResponse;

class StartLaunchResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit StartLaunchResponsePrivate(StartLaunchResponse * const q);

    void parseStartLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartLaunchResponse)
    Q_DISABLE_COPY(StartLaunchResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
