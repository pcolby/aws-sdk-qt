// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEDICATEDIPPOOLREQUEST_P_H
#define QTAWS_DELETEDEDICATEDIPPOOLREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "deletededicatedippoolrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteDedicatedIpPoolRequest;

class DeleteDedicatedIpPoolRequestPrivate : public PinpointEmailRequestPrivate {

public:
    DeleteDedicatedIpPoolRequestPrivate(const PinpointEmailRequest::Action action,
                                   DeleteDedicatedIpPoolRequest * const q);
    DeleteDedicatedIpPoolRequestPrivate(const DeleteDedicatedIpPoolRequestPrivate &other,
                                   DeleteDedicatedIpPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDedicatedIpPoolRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
