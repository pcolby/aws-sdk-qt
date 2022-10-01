// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMERECOVERYPOINTSRESPONSE_P_H
#define QTAWS_LISTVOLUMERECOVERYPOINTSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeRecoveryPointsResponse;

class ListVolumeRecoveryPointsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListVolumeRecoveryPointsResponsePrivate(ListVolumeRecoveryPointsResponse * const q);

    void parseListVolumeRecoveryPointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVolumeRecoveryPointsResponse)
    Q_DISABLE_COPY(ListVolumeRecoveryPointsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
