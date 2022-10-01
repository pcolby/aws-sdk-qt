// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEREFRESHRESPONSE_P_H
#define QTAWS_STARTINSTANCEREFRESHRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class StartInstanceRefreshResponse;

class StartInstanceRefreshResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit StartInstanceRefreshResponsePrivate(StartInstanceRefreshResponse * const q);

    void parseStartInstanceRefreshResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartInstanceRefreshResponse)
    Q_DISABLE_COPY(StartInstanceRefreshResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
