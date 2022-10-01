// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTETABLEREQUEST_P_H
#define QTAWS_DELETEROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "deleteroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteRouteTableRequest;

class DeleteRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteRouteTableRequestPrivate(const Ec2Request::Action action,
                                   DeleteRouteTableRequest * const q);
    DeleteRouteTableRequestPrivate(const DeleteRouteTableRequestPrivate &other,
                                   DeleteRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
