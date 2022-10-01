// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREDISCSIVOLUMESRESPONSE_P_H
#define QTAWS_DESCRIBESTOREDISCSIVOLUMESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeStorediSCSIVolumesResponse;

class DescribeStorediSCSIVolumesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeStorediSCSIVolumesResponsePrivate(DescribeStorediSCSIVolumesResponse * const q);

    void parseDescribeStorediSCSIVolumesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStorediSCSIVolumesResponse)
    Q_DISABLE_COPY(DescribeStorediSCSIVolumesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
