// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEHEALTHRESPONSE_P_H
#define QTAWS_SETINSTANCEHEALTHRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceHealthResponse;

class SetInstanceHealthResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit SetInstanceHealthResponsePrivate(SetInstanceHealthResponse * const q);

    void parseSetInstanceHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetInstanceHealthResponse)
    Q_DISABLE_COPY(SetInstanceHealthResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
