// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORTARGETRESPONSE_P_H
#define QTAWS_CREATETRAFFICMIRRORTARGETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorTargetResponse;

class CreateTrafficMirrorTargetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTrafficMirrorTargetResponsePrivate(CreateTrafficMirrorTargetResponse * const q);

    void parseCreateTrafficMirrorTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorTargetResponse)
    Q_DISABLE_COPY(CreateTrafficMirrorTargetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
