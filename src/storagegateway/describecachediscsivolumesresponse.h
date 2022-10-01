// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEDISCSIVOLUMESRESPONSE_H
#define QTAWS_DESCRIBECACHEDISCSIVOLUMESRESPONSE_H

#include "storagegatewayresponse.h"
#include "describecachediscsivolumesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCachediSCSIVolumesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeCachediSCSIVolumesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeCachediSCSIVolumesResponse(const DescribeCachediSCSIVolumesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCachediSCSIVolumesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCachediSCSIVolumesResponse)
    Q_DISABLE_COPY(DescribeCachediSCSIVolumesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
