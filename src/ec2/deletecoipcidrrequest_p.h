// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPCIDRREQUEST_P_H
#define QTAWS_DELETECOIPCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "deletecoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipCidrRequest;

class DeleteCoipCidrRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteCoipCidrRequestPrivate(const Ec2Request::Action action,
                                   DeleteCoipCidrRequest * const q);
    DeleteCoipCidrRequestPrivate(const DeleteCoipCidrRequestPrivate &other,
                                   DeleteCoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
