// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDRESERVEDINSTANCESREQUEST_P_H
#define QTAWS_DELETEQUEUEDRESERVEDINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "deletequeuedreservedinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteQueuedReservedInstancesRequest;

class DeleteQueuedReservedInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteQueuedReservedInstancesRequestPrivate(const Ec2Request::Action action,
                                   DeleteQueuedReservedInstancesRequest * const q);
    DeleteQueuedReservedInstancesRequestPrivate(const DeleteQueuedReservedInstancesRequestPrivate &other,
                                   DeleteQueuedReservedInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueuedReservedInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
