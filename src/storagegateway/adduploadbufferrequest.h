// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUPLOADBUFFERREQUEST_H
#define QTAWS_ADDUPLOADBUFFERREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class AddUploadBufferRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AddUploadBufferRequest : public StorageGatewayRequest {

public:
    AddUploadBufferRequest(const AddUploadBufferRequest &other);
    AddUploadBufferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddUploadBufferRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
