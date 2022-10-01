// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYVERSIONSREQUEST_H
#define QTAWS_LISTTRAFFICPOLICYVERSIONSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyVersionsRequestPrivate;

class QTAWSROUTE53_EXPORT ListTrafficPolicyVersionsRequest : public Route53Request {

public:
    ListTrafficPolicyVersionsRequest(const ListTrafficPolicyVersionsRequest &other);
    ListTrafficPolicyVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPolicyVersionsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
