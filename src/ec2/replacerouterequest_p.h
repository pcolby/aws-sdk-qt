// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEROUTEREQUEST_P_H
#define QTAWS_REPLACEROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "replacerouterequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceRouteRequest;

class ReplaceRouteRequestPrivate : public Ec2RequestPrivate {

public:
    ReplaceRouteRequestPrivate(const Ec2Request::Action action,
                                   ReplaceRouteRequest * const q);
    ReplaceRouteRequestPrivate(const ReplaceRouteRequestPrivate &other,
                                   ReplaceRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplaceRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
