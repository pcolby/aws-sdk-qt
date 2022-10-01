// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONDETAILREQUEST_H
#define QTAWS_GETOPERATIONDETAILREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetOperationDetailRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetOperationDetailRequest : public Route53DomainsRequest {

public:
    GetOperationDetailRequest(const GetOperationDetailRequest &other);
    GetOperationDetailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationDetailRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
