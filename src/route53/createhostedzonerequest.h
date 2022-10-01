// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDZONEREQUEST_H
#define QTAWS_CREATEHOSTEDZONEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateHostedZoneRequestPrivate;

class QTAWSROUTE53_EXPORT CreateHostedZoneRequest : public Route53Request {

public:
    CreateHostedZoneRequest(const CreateHostedZoneRequest &other);
    CreateHostedZoneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
