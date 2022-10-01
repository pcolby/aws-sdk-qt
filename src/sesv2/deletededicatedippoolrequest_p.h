// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEDICATEDIPPOOLREQUEST_P_H
#define QTAWS_DELETEDEDICATEDIPPOOLREQUEST_P_H

#include "sesv2request_p.h"
#include "deletededicatedippoolrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteDedicatedIpPoolRequest;

class DeleteDedicatedIpPoolRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteDedicatedIpPoolRequestPrivate(const SESv2Request::Action action,
                                   DeleteDedicatedIpPoolRequest * const q);
    DeleteDedicatedIpPoolRequestPrivate(const DeleteDedicatedIpPoolRequestPrivate &other,
                                   DeleteDedicatedIpPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDedicatedIpPoolRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
