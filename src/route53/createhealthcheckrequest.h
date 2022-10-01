// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHEALTHCHECKREQUEST_H
#define QTAWS_CREATEHEALTHCHECKREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateHealthCheckRequestPrivate;

class QTAWSROUTE53_EXPORT CreateHealthCheckRequest : public Route53Request {

public:
    CreateHealthCheckRequest(const CreateHealthCheckRequest &other);
    CreateHealthCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
