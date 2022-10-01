// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHRESPONSE_P_H
#define QTAWS_UPDATELAUNCHRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class UpdateLaunchResponse;

class UpdateLaunchResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit UpdateLaunchResponsePrivate(UpdateLaunchResponse * const q);

    void parseUpdateLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchResponse)
    Q_DISABLE_COPY(UpdateLaunchResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
