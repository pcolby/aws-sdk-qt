// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBLOCALGROUPSRESPONSE_P_H
#define QTAWS_UPDATESMBLOCALGROUPSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBLocalGroupsResponse;

class UpdateSMBLocalGroupsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateSMBLocalGroupsResponsePrivate(UpdateSMBLocalGroupsResponse * const q);

    void parseUpdateSMBLocalGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSMBLocalGroupsResponse)
    Q_DISABLE_COPY(UpdateSMBLocalGroupsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
