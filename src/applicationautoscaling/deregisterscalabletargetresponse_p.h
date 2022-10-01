// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSCALABLETARGETRESPONSE_P_H
#define QTAWS_DEREGISTERSCALABLETARGETRESPONSE_P_H

#include "applicationautoscalingresponse_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeregisterScalableTargetResponse;

class DeregisterScalableTargetResponsePrivate : public ApplicationAutoScalingResponsePrivate {

public:

    explicit DeregisterScalableTargetResponsePrivate(DeregisterScalableTargetResponse * const q);

    void parseDeregisterScalableTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterScalableTargetResponse)
    Q_DISABLE_COPY(DeregisterScalableTargetResponsePrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
