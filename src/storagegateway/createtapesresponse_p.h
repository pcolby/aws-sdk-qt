// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPESRESPONSE_P_H
#define QTAWS_CREATETAPESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapesResponse;

class CreateTapesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateTapesResponsePrivate(CreateTapesResponse * const q);

    void parseCreateTapesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTapesResponse)
    Q_DISABLE_COPY(CreateTapesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
