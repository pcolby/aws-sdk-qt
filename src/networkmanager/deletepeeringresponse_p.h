// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPEERINGRESPONSE_P_H
#define QTAWS_DELETEPEERINGRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeletePeeringResponse;

class DeletePeeringResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeletePeeringResponsePrivate(DeletePeeringResponse * const q);

    void parseDeletePeeringResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePeeringResponse)
    Q_DISABLE_COPY(DeletePeeringResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
