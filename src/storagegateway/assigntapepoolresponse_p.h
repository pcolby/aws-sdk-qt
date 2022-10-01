// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNTAPEPOOLRESPONSE_P_H
#define QTAWS_ASSIGNTAPEPOOLRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class AssignTapePoolResponse;

class AssignTapePoolResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit AssignTapePoolResponsePrivate(AssignTapePoolResponse * const q);

    void parseAssignTapePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssignTapePoolResponse)
    Q_DISABLE_COPY(AssignTapePoolResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
