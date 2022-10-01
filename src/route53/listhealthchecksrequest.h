// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHEALTHCHECKSREQUEST_H
#define QTAWS_LISTHEALTHCHECKSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListHealthChecksRequestPrivate;

class QTAWSROUTE53_EXPORT ListHealthChecksRequest : public Route53Request {

public:
    ListHealthChecksRequest(const ListHealthChecksRequest &other);
    ListHealthChecksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHealthChecksRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
