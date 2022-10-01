// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEARCHIVERESPONSE_P_H
#define QTAWS_DELETETAPEARCHIVERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapeArchiveResponse;

class DeleteTapeArchiveResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DeleteTapeArchiveResponsePrivate(DeleteTapeArchiveResponse * const q);

    void parseDeleteTapeArchiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTapeArchiveResponse)
    Q_DISABLE_COPY(DeleteTapeArchiveResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
