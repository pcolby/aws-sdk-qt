// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYREQUEST_P_H
#define QTAWS_DELETEEMAILIDENTITYREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "deleteemailidentityrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteEmailIdentityRequest;

class DeleteEmailIdentityRequestPrivate : public PinpointEmailRequestPrivate {

public:
    DeleteEmailIdentityRequestPrivate(const PinpointEmailRequest::Action action,
                                   DeleteEmailIdentityRequest * const q);
    DeleteEmailIdentityRequestPrivate(const DeleteEmailIdentityRequestPrivate &other,
                                   DeleteEmailIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEmailIdentityRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
