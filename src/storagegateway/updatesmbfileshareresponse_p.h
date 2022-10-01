// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBFILESHARERESPONSE_P_H
#define QTAWS_UPDATESMBFILESHARERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBFileShareResponse;

class UpdateSMBFileShareResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateSMBFileShareResponsePrivate(UpdateSMBFileShareResponse * const q);

    void parseUpdateSMBFileShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSMBFileShareResponse)
    Q_DISABLE_COPY(UpdateSMBFileShareResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
