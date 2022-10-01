// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERRESPONSE_P_H
#define QTAWS_CREATETRAFFICMIRRORFILTERRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterResponse;

class CreateTrafficMirrorFilterResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTrafficMirrorFilterResponsePrivate(CreateTrafficMirrorFilterResponse * const q);

    void parseCreateTrafficMirrorFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorFilterResponse)
    Q_DISABLE_COPY(CreateTrafficMirrorFilterResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
