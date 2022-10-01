// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBSECURITYSTRATEGYRESPONSE_H
#define QTAWS_UPDATESMBSECURITYSTRATEGYRESPONSE_H

#include "storagegatewayresponse.h"
#include "updatesmbsecuritystrategyrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBSecurityStrategyResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSMBSecurityStrategyResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateSMBSecurityStrategyResponse(const UpdateSMBSecurityStrategyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSMBSecurityStrategyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSMBSecurityStrategyResponse)
    Q_DISABLE_COPY(UpdateSMBSecurityStrategyResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
