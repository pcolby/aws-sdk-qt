// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPERECOVERYPOINTSRESPONSE_P_H
#define QTAWS_DESCRIBETAPERECOVERYPOINTSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapeRecoveryPointsResponse;

class DescribeTapeRecoveryPointsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeTapeRecoveryPointsResponsePrivate(DescribeTapeRecoveryPointsResponse * const q);

    void parseDescribeTapeRecoveryPointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTapeRecoveryPointsResponse)
    Q_DISABLE_COPY(DescribeTapeRecoveryPointsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
