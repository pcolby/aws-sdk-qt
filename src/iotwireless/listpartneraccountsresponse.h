// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNERACCOUNTSRESPONSE_H
#define QTAWS_LISTPARTNERACCOUNTSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listpartneraccountsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListPartnerAccountsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListPartnerAccountsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListPartnerAccountsResponse(const ListPartnerAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPartnerAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartnerAccountsResponse)
    Q_DISABLE_COPY(ListPartnerAccountsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
