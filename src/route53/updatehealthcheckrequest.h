// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHEALTHCHECKREQUEST_H
#define QTAWS_UPDATEHEALTHCHECKREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class UpdateHealthCheckRequestPrivate;

class QTAWSROUTE53_EXPORT UpdateHealthCheckRequest : public Route53Request {

public:
    UpdateHealthCheckRequest(const UpdateHealthCheckRequest &other);
    UpdateHealthCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
