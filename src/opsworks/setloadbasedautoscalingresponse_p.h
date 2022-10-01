// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBASEDAUTOSCALINGRESPONSE_P_H
#define QTAWS_SETLOADBASEDAUTOSCALINGRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class SetLoadBasedAutoScalingResponse;

class SetLoadBasedAutoScalingResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit SetLoadBasedAutoScalingResponsePrivate(SetLoadBasedAutoScalingResponse * const q);

    void parseSetLoadBasedAutoScalingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetLoadBasedAutoScalingResponse)
    Q_DISABLE_COPY(SetLoadBasedAutoScalingResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
