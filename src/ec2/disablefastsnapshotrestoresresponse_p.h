// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTSNAPSHOTRESTORESRESPONSE_P_H
#define QTAWS_DISABLEFASTSNAPSHOTRESTORESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableFastSnapshotRestoresResponse;

class DisableFastSnapshotRestoresResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableFastSnapshotRestoresResponsePrivate(DisableFastSnapshotRestoresResponse * const q);

    void parseDisableFastSnapshotRestoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableFastSnapshotRestoresResponse)
    Q_DISABLE_COPY(DisableFastSnapshotRestoresResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
