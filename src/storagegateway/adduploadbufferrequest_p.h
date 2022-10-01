// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUPLOADBUFFERREQUEST_P_H
#define QTAWS_ADDUPLOADBUFFERREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "adduploadbufferrequest.h"

namespace QtAws {
namespace StorageGateway {

class AddUploadBufferRequest;

class AddUploadBufferRequestPrivate : public StorageGatewayRequestPrivate {

public:
    AddUploadBufferRequestPrivate(const StorageGatewayRequest::Action action,
                                   AddUploadBufferRequest * const q);
    AddUploadBufferRequestPrivate(const AddUploadBufferRequestPrivate &other,
                                   AddUploadBufferRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddUploadBufferRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
