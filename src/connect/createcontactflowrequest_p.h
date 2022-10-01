// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTFLOWREQUEST_P_H
#define QTAWS_CREATECONTACTFLOWREQUEST_P_H

#include "connectrequest_p.h"
#include "createcontactflowrequest.h"

namespace QtAws {
namespace Connect {

class CreateContactFlowRequest;

class CreateContactFlowRequestPrivate : public ConnectRequestPrivate {

public:
    CreateContactFlowRequestPrivate(const ConnectRequest::Action action,
                                   CreateContactFlowRequest * const q);
    CreateContactFlowRequestPrivate(const CreateContactFlowRequestPrivate &other,
                                   CreateContactFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
