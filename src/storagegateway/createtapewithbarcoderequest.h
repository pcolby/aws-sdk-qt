// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEWITHBARCODEREQUEST_H
#define QTAWS_CREATETAPEWITHBARCODEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapeWithBarcodeRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateTapeWithBarcodeRequest : public StorageGatewayRequest {

public:
    CreateTapeWithBarcodeRequest(const CreateTapeWithBarcodeRequest &other);
    CreateTapeWithBarcodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTapeWithBarcodeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
