// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINSTANCEREFRESHRESPONSE_P_H
#define QTAWS_CANCELINSTANCEREFRESHRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class CancelInstanceRefreshResponse;

class CancelInstanceRefreshResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit CancelInstanceRefreshResponsePrivate(CancelInstanceRefreshResponse * const q);

    void parseCancelInstanceRefreshResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelInstanceRefreshResponse)
    Q_DISABLE_COPY(CancelInstanceRefreshResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
