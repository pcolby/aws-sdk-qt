// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPEARCHIVESRESPONSE_P_H
#define QTAWS_DESCRIBETAPEARCHIVESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapeArchivesResponse;

class DescribeTapeArchivesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeTapeArchivesResponsePrivate(DescribeTapeArchivesResponse * const q);

    void parseDescribeTapeArchivesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTapeArchivesResponse)
    Q_DISABLE_COPY(DescribeTapeArchivesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
