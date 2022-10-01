// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORSESSIONRESPONSE_P_H
#define QTAWS_DELETETRAFFICMIRRORSESSIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorSessionResponse;

class DeleteTrafficMirrorSessionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTrafficMirrorSessionResponsePrivate(DeleteTrafficMirrorSessionResponse * const q);

    void parseDeleteTrafficMirrorSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorSessionResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorSessionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
