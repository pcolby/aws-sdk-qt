// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKSTATUSREQUEST_H
#define QTAWS_GETHEALTHCHECKSTATUSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckStatusRequestPrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckStatusRequest : public Route53Request {

public:
    GetHealthCheckStatusRequest(const GetHealthCheckStatusRequest &other);
    GetHealthCheckStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckStatusRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
