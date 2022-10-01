// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDWORKINGSTORAGERESPONSE_P_H
#define QTAWS_ADDWORKINGSTORAGERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class AddWorkingStorageResponse;

class AddWorkingStorageResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit AddWorkingStorageResponsePrivate(AddWorkingStorageResponse * const q);

    void parseAddWorkingStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddWorkingStorageResponse)
    Q_DISABLE_COPY(AddWorkingStorageResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
