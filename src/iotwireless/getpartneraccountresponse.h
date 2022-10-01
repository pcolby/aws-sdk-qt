// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTNERACCOUNTRESPONSE_H
#define QTAWS_GETPARTNERACCOUNTRESPONSE_H

#include "iotwirelessresponse.h"
#include "getpartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPartnerAccountResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetPartnerAccountResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetPartnerAccountResponse(const GetPartnerAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPartnerAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPartnerAccountResponse)
    Q_DISABLE_COPY(GetPartnerAccountResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
