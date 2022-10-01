// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINSTANCESRESPONSE_P_H
#define QTAWS_DETACHINSTANCESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DetachInstancesResponse;

class DetachInstancesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DetachInstancesResponsePrivate(DetachInstancesResponse * const q);

    void parseDetachInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachInstancesResponse)
    Q_DISABLE_COPY(DetachInstancesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
