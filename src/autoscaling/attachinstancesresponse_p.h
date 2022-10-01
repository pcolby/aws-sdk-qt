// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESRESPONSE_P_H
#define QTAWS_ATTACHINSTANCESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class AttachInstancesResponse;

class AttachInstancesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit AttachInstancesResponsePrivate(AttachInstancesResponse * const q);

    void parseAttachInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachInstancesResponse)
    Q_DISABLE_COPY(AttachInstancesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
