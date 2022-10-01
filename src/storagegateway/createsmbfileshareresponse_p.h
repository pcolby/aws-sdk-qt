// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMBFILESHARERESPONSE_P_H
#define QTAWS_CREATESMBFILESHARERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateSMBFileShareResponse;

class CreateSMBFileShareResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateSMBFileShareResponsePrivate(CreateSMBFileShareResponse * const q);

    void parseCreateSMBFileShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSMBFileShareResponse)
    Q_DISABLE_COPY(CreateSMBFileShareResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
