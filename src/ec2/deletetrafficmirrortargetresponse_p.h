// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORTARGETRESPONSE_P_H
#define QTAWS_DELETETRAFFICMIRRORTARGETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorTargetResponse;

class DeleteTrafficMirrorTargetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTrafficMirrorTargetResponsePrivate(DeleteTrafficMirrorTargetResponse * const q);

    void parseDeleteTrafficMirrorTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorTargetResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorTargetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
