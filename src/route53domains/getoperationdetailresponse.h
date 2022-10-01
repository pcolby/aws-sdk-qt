// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONDETAILRESPONSE_H
#define QTAWS_GETOPERATIONDETAILRESPONSE_H

#include "route53domainsresponse.h"
#include "getoperationdetailrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetOperationDetailResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetOperationDetailResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    GetOperationDetailResponse(const GetOperationDetailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOperationDetailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationDetailResponse)
    Q_DISABLE_COPY(GetOperationDetailResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
