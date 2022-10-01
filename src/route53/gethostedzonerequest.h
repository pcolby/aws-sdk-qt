// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONEREQUEST_H
#define QTAWS_GETHOSTEDZONEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneRequestPrivate;

class QTAWSROUTE53_EXPORT GetHostedZoneRequest : public Route53Request {

public:
    GetHostedZoneRequest(const GetHostedZoneRequest &other);
    GetHostedZoneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
