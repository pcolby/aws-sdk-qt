// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCWITHHOSTEDZONEREQUEST_H
#define QTAWS_ASSOCIATEVPCWITHHOSTEDZONEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class AssociateVPCWithHostedZoneRequestPrivate;

class QTAWSROUTE53_EXPORT AssociateVPCWithHostedZoneRequest : public Route53Request {

public:
    AssociateVPCWithHostedZoneRequest(const AssociateVPCWithHostedZoneRequest &other);
    AssociateVPCWithHostedZoneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateVPCWithHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
