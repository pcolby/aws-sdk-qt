// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPPOOLREQUEST_P_H
#define QTAWS_DELETECOIPPOOLREQUEST_P_H

#include "ec2request_p.h"
#include "deletecoippoolrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipPoolRequest;

class DeleteCoipPoolRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteCoipPoolRequestPrivate(const Ec2Request::Action action,
                                   DeleteCoipPoolRequest * const q);
    DeleteCoipPoolRequestPrivate(const DeleteCoipPoolRequestPrivate &other,
                                   DeleteCoipPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCoipPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
