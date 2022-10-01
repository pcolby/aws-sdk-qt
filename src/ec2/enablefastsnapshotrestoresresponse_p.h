// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEFASTSNAPSHOTRESTORESRESPONSE_P_H
#define QTAWS_ENABLEFASTSNAPSHOTRESTORESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableFastSnapshotRestoresResponse;

class EnableFastSnapshotRestoresResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableFastSnapshotRestoresResponsePrivate(EnableFastSnapshotRestoresResponse * const q);

    void parseEnableFastSnapshotRestoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableFastSnapshotRestoresResponse)
    Q_DISABLE_COPY(EnableFastSnapshotRestoresResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
