// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPESRESPONSE_P_H
#define QTAWS_DESCRIBETAPESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapesResponse;

class DescribeTapesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeTapesResponsePrivate(DescribeTapesResponse * const q);

    void parseDescribeTapesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTapesResponse)
    Q_DISABLE_COPY(DescribeTapesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
