// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORSESSIONRESPONSE_P_H
#define QTAWS_CREATETRAFFICMIRRORSESSIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorSessionResponse;

class CreateTrafficMirrorSessionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTrafficMirrorSessionResponsePrivate(CreateTrafficMirrorSessionResponse * const q);

    void parseCreateTrafficMirrorSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorSessionResponse)
    Q_DISABLE_COPY(CreateTrafficMirrorSessionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
