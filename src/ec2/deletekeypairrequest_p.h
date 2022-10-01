// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYPAIRREQUEST_P_H
#define QTAWS_DELETEKEYPAIRREQUEST_P_H

#include "ec2request_p.h"
#include "deletekeypairrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteKeyPairRequest;

class DeleteKeyPairRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteKeyPairRequestPrivate(const Ec2Request::Action action,
                                   DeleteKeyPairRequest * const q);
    DeleteKeyPairRequestPrivate(const DeleteKeyPairRequestPrivate &other,
                                   DeleteKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKeyPairRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
