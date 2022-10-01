// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPLOADBUFFERREQUEST_H
#define QTAWS_DESCRIBEUPLOADBUFFERREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeUploadBufferRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeUploadBufferRequest : public StorageGatewayRequest {

public:
    DescribeUploadBufferRequest(const DescribeUploadBufferRequest &other);
    DescribeUploadBufferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUploadBufferRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
