// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETSREQUEST_P_H
#define QTAWS_DELETEFLEETSREQUEST_P_H

#include "ec2request_p.h"
#include "deletefleetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteFleetsRequest;

class DeleteFleetsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteFleetsRequestPrivate(const Ec2Request::Action action,
                                   DeleteFleetsRequest * const q);
    DeleteFleetsRequestPrivate(const DeleteFleetsRequestPrivate &other,
                                   DeleteFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFleetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
