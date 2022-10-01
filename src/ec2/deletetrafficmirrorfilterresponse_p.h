// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERRESPONSE_P_H
#define QTAWS_DELETETRAFFICMIRRORFILTERRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterResponse;

class DeleteTrafficMirrorFilterResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTrafficMirrorFilterResponsePrivate(DeleteTrafficMirrorFilterResponse * const q);

    void parseDeleteTrafficMirrorFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorFilterResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorFilterResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
