// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVETAPERECOVERYPOINTRESPONSE_P_H
#define QTAWS_RETRIEVETAPERECOVERYPOINTRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class RetrieveTapeRecoveryPointResponse;

class RetrieveTapeRecoveryPointResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit RetrieveTapeRecoveryPointResponsePrivate(RetrieveTapeRecoveryPointResponse * const q);

    void parseRetrieveTapeRecoveryPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetrieveTapeRecoveryPointResponse)
    Q_DISABLE_COPY(RetrieveTapeRecoveryPointResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
