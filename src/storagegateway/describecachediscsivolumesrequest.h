// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEDISCSIVOLUMESREQUEST_H
#define QTAWS_DESCRIBECACHEDISCSIVOLUMESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCachediSCSIVolumesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeCachediSCSIVolumesRequest : public StorageGatewayRequest {

public:
    DescribeCachediSCSIVolumesRequest(const DescribeCachediSCSIVolumesRequest &other);
    DescribeCachediSCSIVolumesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCachediSCSIVolumesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
