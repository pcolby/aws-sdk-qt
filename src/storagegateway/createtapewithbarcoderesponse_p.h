// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEWITHBARCODERESPONSE_P_H
#define QTAWS_CREATETAPEWITHBARCODERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapeWithBarcodeResponse;

class CreateTapeWithBarcodeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateTapeWithBarcodeResponsePrivate(CreateTapeWithBarcodeResponse * const q);

    void parseCreateTapeWithBarcodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTapeWithBarcodeResponse)
    Q_DISABLE_COPY(CreateTapeWithBarcodeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
