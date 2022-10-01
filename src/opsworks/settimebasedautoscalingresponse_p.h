// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTIMEBASEDAUTOSCALINGRESPONSE_P_H
#define QTAWS_SETTIMEBASEDAUTOSCALINGRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class SetTimeBasedAutoScalingResponse;

class SetTimeBasedAutoScalingResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit SetTimeBasedAutoScalingResponsePrivate(SetTimeBasedAutoScalingResponse * const q);

    void parseSetTimeBasedAutoScalingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTimeBasedAutoScalingResponse)
    Q_DISABLE_COPY(SetTimeBasedAutoScalingResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
