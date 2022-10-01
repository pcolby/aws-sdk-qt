// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORSESSIONRESPONSE_P_H
#define QTAWS_MODIFYTRAFFICMIRRORSESSIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorSessionResponse;

class ModifyTrafficMirrorSessionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyTrafficMirrorSessionResponsePrivate(ModifyTrafficMirrorSessionResponse * const q);

    void parseModifyTrafficMirrorSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTrafficMirrorSessionResponse)
    Q_DISABLE_COPY(ModifyTrafficMirrorSessionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
