// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSRESPONSE_P_H
#define QTAWS_CREATESNAPSHOTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateSnapshotsResponse;

class CreateSnapshotsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateSnapshotsResponsePrivate(CreateSnapshotsResponse * const q);

    void parseCreateSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotsResponse)
    Q_DISABLE_COPY(CreateSnapshotsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
