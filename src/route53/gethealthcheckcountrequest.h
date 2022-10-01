// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKCOUNTREQUEST_H
#define QTAWS_GETHEALTHCHECKCOUNTREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckCountRequestPrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckCountRequest : public Route53Request {

public:
    GetHealthCheckCountRequest(const GetHealthCheckCountRequest &other);
    GetHealthCheckCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckCountRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
