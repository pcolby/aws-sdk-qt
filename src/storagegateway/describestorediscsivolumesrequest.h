// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREDISCSIVOLUMESREQUEST_H
#define QTAWS_DESCRIBESTOREDISCSIVOLUMESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeStorediSCSIVolumesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeStorediSCSIVolumesRequest : public StorageGatewayRequest {

public:
    DescribeStorediSCSIVolumesRequest(const DescribeStorediSCSIVolumesRequest &other);
    DescribeStorediSCSIVolumesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStorediSCSIVolumesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
