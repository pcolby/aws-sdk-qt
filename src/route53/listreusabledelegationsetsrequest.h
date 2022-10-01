// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREUSABLEDELEGATIONSETSREQUEST_H
#define QTAWS_LISTREUSABLEDELEGATIONSETSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListReusableDelegationSetsRequestPrivate;

class QTAWSROUTE53_EXPORT ListReusableDelegationSetsRequest : public Route53Request {

public:
    ListReusableDelegationSetsRequest(const ListReusableDelegationSetsRequest &other);
    ListReusableDelegationSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReusableDelegationSetsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
