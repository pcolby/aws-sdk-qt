// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGPLANSRESPONSE_P_H
#define QTAWS_AUTOSCALINGPLANSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansResponse;

class AutoScalingPlansResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AutoScalingPlansResponsePrivate(AutoScalingPlansResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AutoScalingPlansResponse)
    Q_DISABLE_COPY(AutoScalingPlansResponsePrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
