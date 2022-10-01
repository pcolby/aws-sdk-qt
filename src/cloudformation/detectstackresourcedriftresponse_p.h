// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKRESOURCEDRIFTRESPONSE_P_H
#define QTAWS_DETECTSTACKRESOURCEDRIFTRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackResourceDriftResponse;

class DetectStackResourceDriftResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DetectStackResourceDriftResponsePrivate(DetectStackResourceDriftResponse * const q);

    void parseDetectStackResourceDriftResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectStackResourceDriftResponse)
    Q_DISABLE_COPY(DetectStackResourceDriftResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
