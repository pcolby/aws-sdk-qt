// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRETRIEVALRESPONSE_P_H
#define QTAWS_CANCELRETRIEVALRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CancelRetrievalResponse;

class CancelRetrievalResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CancelRetrievalResponsePrivate(CancelRetrievalResponse * const q);

    void parseCancelRetrievalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelRetrievalResponse)
    Q_DISABLE_COPY(CancelRetrievalResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
