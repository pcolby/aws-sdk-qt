// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBFILESHAREVISIBILITYRESPONSE_P_H
#define QTAWS_UPDATESMBFILESHAREVISIBILITYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBFileShareVisibilityResponse;

class UpdateSMBFileShareVisibilityResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateSMBFileShareVisibilityResponsePrivate(UpdateSMBFileShareVisibilityResponse * const q);

    void parseUpdateSMBFileShareVisibilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSMBFileShareVisibilityResponse)
    Q_DISABLE_COPY(UpdateSMBFileShareVisibilityResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
