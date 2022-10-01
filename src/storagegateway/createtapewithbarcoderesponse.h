// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEWITHBARCODERESPONSE_H
#define QTAWS_CREATETAPEWITHBARCODERESPONSE_H

#include "storagegatewayresponse.h"
#include "createtapewithbarcoderequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapeWithBarcodeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateTapeWithBarcodeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateTapeWithBarcodeResponse(const CreateTapeWithBarcodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTapeWithBarcodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTapeWithBarcodeResponse)
    Q_DISABLE_COPY(CreateTapeWithBarcodeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
