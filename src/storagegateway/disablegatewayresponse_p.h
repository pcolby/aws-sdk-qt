// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEGATEWAYRESPONSE_P_H
#define QTAWS_DISABLEGATEWAYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DisableGatewayResponse;

class DisableGatewayResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DisableGatewayResponsePrivate(DisableGatewayResponse * const q);

    void parseDisableGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableGatewayResponse)
    Q_DISABLE_COPY(DisableGatewayResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
