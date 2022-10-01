// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDZONEREQUEST_P_H
#define QTAWS_DELETEHOSTEDZONEREQUEST_P_H

#include "route53request_p.h"
#include "deletehostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class DeleteHostedZoneRequest;

class DeleteHostedZoneRequestPrivate : public Route53RequestPrivate {

public:
    DeleteHostedZoneRequestPrivate(const Route53Request::Action action,
                                   DeleteHostedZoneRequest * const q);
    DeleteHostedZoneRequestPrivate(const DeleteHostedZoneRequestPrivate &other,
                                   DeleteHostedZoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
