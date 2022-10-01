// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXITSTANDBYRESPONSE_P_H
#define QTAWS_EXITSTANDBYRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class ExitStandbyResponse;

class ExitStandbyResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit ExitStandbyResponsePrivate(ExitStandbyResponse * const q);

    void parseExitStandbyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExitStandbyResponse)
    Q_DISABLE_COPY(ExitStandbyResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
