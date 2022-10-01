// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSENDINGATTRIBUTESRESPONSE_H
#define QTAWS_PUTACCOUNTSENDINGATTRIBUTESRESPONSE_H

#include "pinpointemailresponse.h"
#include "putaccountsendingattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutAccountSendingAttributesResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutAccountSendingAttributesResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    PutAccountSendingAttributesResponse(const PutAccountSendingAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountSendingAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSendingAttributesResponse)
    Q_DISABLE_COPY(PutAccountSendingAttributesResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
