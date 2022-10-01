// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWNAMEREQUEST_P_H
#define QTAWS_UPDATECONTACTFLOWNAMEREQUEST_P_H

#include "connectrequest_p.h"
#include "updatecontactflownamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowNameRequest;

class UpdateContactFlowNameRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateContactFlowNameRequestPrivate(const ConnectRequest::Action action,
                                   UpdateContactFlowNameRequest * const q);
    UpdateContactFlowNameRequestPrivate(const UpdateContactFlowNameRequestPrivate &other,
                                   UpdateContactFlowNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
