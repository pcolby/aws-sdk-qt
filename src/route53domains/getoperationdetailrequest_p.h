// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONDETAILREQUEST_P_H
#define QTAWS_GETOPERATIONDETAILREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "getoperationdetailrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetOperationDetailRequest;

class GetOperationDetailRequestPrivate : public Route53DomainsRequestPrivate {

public:
    GetOperationDetailRequestPrivate(const Route53DomainsRequest::Action action,
                                   GetOperationDetailRequest * const q);
    GetOperationDetailRequestPrivate(const GetOperationDetailRequestPrivate &other,
                                   GetOperationDetailRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOperationDetailRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
