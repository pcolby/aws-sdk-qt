// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEPOOLRESPONSE_P_H
#define QTAWS_DELETETAPEPOOLRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapePoolResponse;

class DeleteTapePoolResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DeleteTapePoolResponsePrivate(DeleteTapePoolResponse * const q);

    void parseDeleteTapePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTapePoolResponse)
    Q_DISABLE_COPY(DeleteTapePoolResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
