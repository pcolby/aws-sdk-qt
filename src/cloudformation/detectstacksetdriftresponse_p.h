// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKSETDRIFTRESPONSE_P_H
#define QTAWS_DETECTSTACKSETDRIFTRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackSetDriftResponse;

class DetectStackSetDriftResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DetectStackSetDriftResponsePrivate(DetectStackSetDriftResponse * const q);

    void parseDetectStackSetDriftResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectStackSetDriftResponse)
    Q_DISABLE_COPY(DetectStackSetDriftResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
