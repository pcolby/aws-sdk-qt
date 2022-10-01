// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKREQUEST_H
#define QTAWS_GETHEALTHCHECKREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckRequestPrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckRequest : public Route53Request {

public:
    GetHealthCheckRequest(const GetHealthCheckRequest &other);
    GetHealthCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
