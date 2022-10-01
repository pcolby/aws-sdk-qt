// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFASTSNAPSHOTRESTORESRESPONSE_P_H
#define QTAWS_DESCRIBEFASTSNAPSHOTRESTORESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFastSnapshotRestoresResponse;

class DescribeFastSnapshotRestoresResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFastSnapshotRestoresResponsePrivate(DescribeFastSnapshotRestoresResponse * const q);

    void parseDescribeFastSnapshotRestoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFastSnapshotRestoresResponse)
    Q_DISABLE_COPY(DescribeFastSnapshotRestoresResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
