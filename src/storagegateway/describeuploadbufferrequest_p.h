// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPLOADBUFFERREQUEST_P_H
#define QTAWS_DESCRIBEUPLOADBUFFERREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describeuploadbufferrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeUploadBufferRequest;

class DescribeUploadBufferRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeUploadBufferRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeUploadBufferRequest * const q);
    DescribeUploadBufferRequestPrivate(const DescribeUploadBufferRequestPrivate &other,
                                   DescribeUploadBufferRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUploadBufferRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
