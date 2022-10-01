// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDESIREDCAPACITYRESPONSE_P_H
#define QTAWS_SETDESIREDCAPACITYRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class SetDesiredCapacityResponse;

class SetDesiredCapacityResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit SetDesiredCapacityResponsePrivate(SetDesiredCapacityResponse * const q);

    void parseSetDesiredCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetDesiredCapacityResponse)
    Q_DISABLE_COPY(SetDesiredCapacityResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
