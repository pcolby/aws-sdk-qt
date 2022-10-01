// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENTERSTANDBYRESPONSE_P_H
#define QTAWS_ENTERSTANDBYRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class EnterStandbyResponse;

class EnterStandbyResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit EnterStandbyResponsePrivate(EnterStandbyResponse * const q);

    void parseEnterStandbyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnterStandbyResponse)
    Q_DISABLE_COPY(EnterStandbyResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
