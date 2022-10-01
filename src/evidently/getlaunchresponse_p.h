// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHRESPONSE_P_H
#define QTAWS_GETLAUNCHRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class GetLaunchResponse;

class GetLaunchResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit GetLaunchResponsePrivate(GetLaunchResponse * const q);

    void parseGetLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLaunchResponse)
    Q_DISABLE_COPY(GetLaunchResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
