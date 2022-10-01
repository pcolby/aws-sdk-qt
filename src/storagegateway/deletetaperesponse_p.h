// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPERESPONSE_P_H
#define QTAWS_DELETETAPERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapeResponse;

class DeleteTapeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DeleteTapeResponsePrivate(DeleteTapeResponse * const q);

    void parseDeleteTapeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTapeResponse)
    Q_DISABLE_COPY(DeleteTapeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
