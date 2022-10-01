// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREDISCSIVOLUMESRESPONSE_H
#define QTAWS_DESCRIBESTOREDISCSIVOLUMESRESPONSE_H

#include "storagegatewayresponse.h"
#include "describestorediscsivolumesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeStorediSCSIVolumesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeStorediSCSIVolumesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeStorediSCSIVolumesResponse(const DescribeStorediSCSIVolumesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStorediSCSIVolumesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStorediSCSIVolumesResponse)
    Q_DISABLE_COPY(DescribeStorediSCSIVolumesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
