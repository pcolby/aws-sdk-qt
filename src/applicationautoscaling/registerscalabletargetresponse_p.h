// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCALABLETARGETRESPONSE_P_H
#define QTAWS_REGISTERSCALABLETARGETRESPONSE_P_H

#include "applicationautoscalingresponse_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class RegisterScalableTargetResponse;

class RegisterScalableTargetResponsePrivate : public ApplicationAutoScalingResponsePrivate {

public:

    explicit RegisterScalableTargetResponsePrivate(RegisterScalableTargetResponse * const q);

    void parseRegisterScalableTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterScalableTargetResponse)
    Q_DISABLE_COPY(RegisterScalableTargetResponsePrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
