// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTLIMITRESPONSE_H
#define QTAWS_GETACCOUNTLIMITRESPONSE_H

#include "route53response.h"
#include "getaccountlimitrequest.h"

namespace QtAws {
namespace Route53 {

class GetAccountLimitResponsePrivate;

class QTAWSROUTE53_EXPORT GetAccountLimitResponse : public Route53Response {
    Q_OBJECT

public:
    GetAccountLimitResponse(const GetAccountLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountLimitResponse)
    Q_DISABLE_COPY(GetAccountLimitResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
