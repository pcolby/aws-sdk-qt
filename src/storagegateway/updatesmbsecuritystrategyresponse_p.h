// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBSECURITYSTRATEGYRESPONSE_P_H
#define QTAWS_UPDATESMBSECURITYSTRATEGYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBSecurityStrategyResponse;

class UpdateSMBSecurityStrategyResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateSMBSecurityStrategyResponsePrivate(UpdateSMBSecurityStrategyResponse * const q);

    void parseUpdateSMBSecurityStrategyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSMBSecurityStrategyResponse)
    Q_DISABLE_COPY(UpdateSMBSecurityStrategyResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
