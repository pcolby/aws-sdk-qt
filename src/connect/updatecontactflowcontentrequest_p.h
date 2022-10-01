// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWCONTENTREQUEST_P_H
#define QTAWS_UPDATECONTACTFLOWCONTENTREQUEST_P_H

#include "connectrequest_p.h"
#include "updatecontactflowcontentrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowContentRequest;

class UpdateContactFlowContentRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateContactFlowContentRequestPrivate(const ConnectRequest::Action action,
                                   UpdateContactFlowContentRequest * const q);
    UpdateContactFlowContentRequestPrivate(const UpdateContactFlowContentRequestPrivate &other,
                                   UpdateContactFlowContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowContentRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
