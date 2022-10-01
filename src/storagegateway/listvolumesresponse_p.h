// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMESRESPONSE_P_H
#define QTAWS_LISTVOLUMESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumesResponse;

class ListVolumesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListVolumesResponsePrivate(ListVolumesResponse * const q);

    void parseListVolumesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVolumesResponse)
    Q_DISABLE_COPY(ListVolumesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
