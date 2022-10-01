// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEDICATEDIPPOOLREQUEST_P_H
#define QTAWS_CREATEDEDICATEDIPPOOLREQUEST_P_H

#include "sesv2request_p.h"
#include "creatededicatedippoolrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateDedicatedIpPoolRequest;

class CreateDedicatedIpPoolRequestPrivate : public SESv2RequestPrivate {

public:
    CreateDedicatedIpPoolRequestPrivate(const SESv2Request::Action action,
                                   CreateDedicatedIpPoolRequest * const q);
    CreateDedicatedIpPoolRequestPrivate(const CreateDedicatedIpPoolRequestPrivate &other,
                                   CreateDedicatedIpPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDedicatedIpPoolRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
