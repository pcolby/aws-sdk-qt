// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTBALANCERESPONSE_H
#define QTAWS_GETACCOUNTBALANCERESPONSE_H

#include "mturkresponse.h"
#include "getaccountbalancerequest.h"

namespace QtAws {
namespace MTurk {

class GetAccountBalanceResponsePrivate;

class QTAWSMTURK_EXPORT GetAccountBalanceResponse : public MTurkResponse {
    Q_OBJECT

public:
    GetAccountBalanceResponse(const GetAccountBalanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountBalanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountBalanceResponse)
    Q_DISABLE_COPY(GetAccountBalanceResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
