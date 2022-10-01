// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKDRIFTRESPONSE_P_H
#define QTAWS_DETECTSTACKDRIFTRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackDriftResponse;

class DetectStackDriftResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DetectStackDriftResponsePrivate(DetectStackDriftResponse * const q);

    void parseDetectStackDriftResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectStackDriftResponse)
    Q_DISABLE_COPY(DetectStackDriftResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
