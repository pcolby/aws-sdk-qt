// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMBGUESTPASSWORDRESPONSE_H
#define QTAWS_SETSMBGUESTPASSWORDRESPONSE_H

#include "storagegatewayresponse.h"
#include "setsmbguestpasswordrequest.h"

namespace QtAws {
namespace StorageGateway {

class SetSMBGuestPasswordResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT SetSMBGuestPasswordResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    SetSMBGuestPasswordResponse(const SetSMBGuestPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetSMBGuestPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSMBGuestPasswordResponse)
    Q_DISABLE_COPY(SetSMBGuestPasswordResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
