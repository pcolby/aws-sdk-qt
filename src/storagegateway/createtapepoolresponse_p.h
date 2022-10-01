// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEPOOLRESPONSE_P_H
#define QTAWS_CREATETAPEPOOLRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapePoolResponse;

class CreateTapePoolResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateTapePoolResponsePrivate(CreateTapePoolResponse * const q);

    void parseCreateTapePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTapePoolResponse)
    Q_DISABLE_COPY(CreateTapePoolResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
