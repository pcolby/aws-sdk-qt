// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTEREQUEST_P_H
#define QTAWS_DELETEROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "deleterouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteRouteRequest;

class DeleteRouteRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteRouteRequestPrivate(const Ec2Request::Action action,
                                   DeleteRouteRequest * const q);
    DeleteRouteRequestPrivate(const DeleteRouteRequestPrivate &other,
                                   DeleteRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
