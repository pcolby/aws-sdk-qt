// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFAILBACKLAUNCHRESPONSE_P_H
#define QTAWS_STARTFAILBACKLAUNCHRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class StartFailbackLaunchResponse;

class StartFailbackLaunchResponsePrivate : public DrsResponsePrivate {

public:

    explicit StartFailbackLaunchResponsePrivate(StartFailbackLaunchResponse * const q);

    void parseStartFailbackLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFailbackLaunchResponse)
    Q_DISABLE_COPY(StartFailbackLaunchResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
