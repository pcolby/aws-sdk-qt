// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGRESPONSE_P_H
#define QTAWS_AUTOSCALINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class AutoScalingResponse;

class AutoScalingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AutoScalingResponsePrivate(AutoScalingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AutoScalingResponse)
    Q_DISABLE_COPY(AutoScalingResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
