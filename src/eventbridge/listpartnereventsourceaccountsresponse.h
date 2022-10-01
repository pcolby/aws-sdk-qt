// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_H
#define QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_H

#include "eventbridgeresponse.h"
#include "listpartnereventsourceaccountsrequest.h"

namespace QtAws {
namespace EventBridge {

class ListPartnerEventSourceAccountsResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT ListPartnerEventSourceAccountsResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    ListPartnerEventSourceAccountsResponse(const ListPartnerEventSourceAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPartnerEventSourceAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartnerEventSourceAccountsResponse)
    Q_DISABLE_COPY(ListPartnerEventSourceAccountsResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
