// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULECONTENTREQUEST_P_H
#define QTAWS_UPDATECONTACTFLOWMODULECONTENTREQUEST_P_H

#include "connectrequest_p.h"
#include "updatecontactflowmodulecontentrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleContentRequest;

class UpdateContactFlowModuleContentRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateContactFlowModuleContentRequestPrivate(const ConnectRequest::Action action,
                                   UpdateContactFlowModuleContentRequest * const q);
    UpdateContactFlowModuleContentRequestPrivate(const UpdateContactFlowModuleContentRequestPrivate &other,
                                   UpdateContactFlowModuleContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowModuleContentRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
