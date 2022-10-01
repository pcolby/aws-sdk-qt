// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYPAIRREQUEST_P_H
#define QTAWS_CREATEKEYPAIRREQUEST_P_H

#include "ec2request_p.h"
#include "createkeypairrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateKeyPairRequest;

class CreateKeyPairRequestPrivate : public Ec2RequestPrivate {

public:
    CreateKeyPairRequestPrivate(const Ec2Request::Action action,
                                   CreateKeyPairRequest * const q);
    CreateKeyPairRequestPrivate(const CreateKeyPairRequestPrivate &other,
                                   CreateKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKeyPairRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
