// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSnapshotsResponse;

class DescribeSnapshotsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeSnapshotsResponsePrivate(DescribeSnapshotsResponse * const q);

    void parseDescribeSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotsResponse)
    Q_DISABLE_COPY(DescribeSnapshotsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
