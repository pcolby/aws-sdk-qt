// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEWITHBARCODEREQUEST_P_H
#define QTAWS_CREATETAPEWITHBARCODEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createtapewithbarcoderequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapeWithBarcodeRequest;

class CreateTapeWithBarcodeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateTapeWithBarcodeRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateTapeWithBarcodeRequest * const q);
    CreateTapeWithBarcodeRequestPrivate(const CreateTapeWithBarcodeRequestPrivate &other,
                                   CreateTapeWithBarcodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTapeWithBarcodeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
