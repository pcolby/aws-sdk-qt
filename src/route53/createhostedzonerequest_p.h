// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDZONEREQUEST_P_H
#define QTAWS_CREATEHOSTEDZONEREQUEST_P_H

#include "route53request_p.h"
#include "createhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class CreateHostedZoneRequest;

class CreateHostedZoneRequestPrivate : public Route53RequestPrivate {

public:
    CreateHostedZoneRequestPrivate(const Route53Request::Action action,
                                   CreateHostedZoneRequest * const q);
    CreateHostedZoneRequestPrivate(const CreateHostedZoneRequestPrivate &other,
                                   CreateHostedZoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
