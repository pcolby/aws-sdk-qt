// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEDISCSIVOLUMESRESPONSE_P_H
#define QTAWS_DESCRIBECACHEDISCSIVOLUMESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCachediSCSIVolumesResponse;

class DescribeCachediSCSIVolumesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeCachediSCSIVolumesResponsePrivate(DescribeCachediSCSIVolumesResponse * const q);

    void parseDescribeCachediSCSIVolumesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCachediSCSIVolumesResponse)
    Q_DISABLE_COPY(DescribeCachediSCSIVolumesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
