// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVETAPEARCHIVERESPONSE_P_H
#define QTAWS_RETRIEVETAPEARCHIVERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class RetrieveTapeArchiveResponse;

class RetrieveTapeArchiveResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit RetrieveTapeArchiveResponsePrivate(RetrieveTapeArchiveResponse * const q);

    void parseRetrieveTapeArchiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetrieveTapeArchiveResponse)
    Q_DISABLE_COPY(RetrieveTapeArchiveResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
