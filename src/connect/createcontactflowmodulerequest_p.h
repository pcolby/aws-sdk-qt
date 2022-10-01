// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTFLOWMODULEREQUEST_P_H
#define QTAWS_CREATECONTACTFLOWMODULEREQUEST_P_H

#include "connectrequest_p.h"
#include "createcontactflowmodulerequest.h"

namespace QtAws {
namespace Connect {

class CreateContactFlowModuleRequest;

class CreateContactFlowModuleRequestPrivate : public ConnectRequestPrivate {

public:
    CreateContactFlowModuleRequestPrivate(const ConnectRequest::Action action,
                                   CreateContactFlowModuleRequest * const q);
    CreateContactFlowModuleRequestPrivate(const CreateContactFlowModuleRequestPrivate &other,
                                   CreateContactFlowModuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContactFlowModuleRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
