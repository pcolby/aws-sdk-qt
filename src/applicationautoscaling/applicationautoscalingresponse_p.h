// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONAUTOSCALINGRESPONSE_P_H
#define QTAWS_APPLICATIONAUTOSCALINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class ApplicationAutoScalingResponse;

class ApplicationAutoScalingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ApplicationAutoScalingResponsePrivate(ApplicationAutoScalingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplicationAutoScalingResponse)
    Q_DISABLE_COPY(ApplicationAutoScalingResponsePrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
