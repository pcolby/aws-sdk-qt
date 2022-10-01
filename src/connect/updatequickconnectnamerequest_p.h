// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTNAMEREQUEST_P_H
#define QTAWS_UPDATEQUICKCONNECTNAMEREQUEST_P_H

#include "connectrequest_p.h"
#include "updatequickconnectnamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectNameRequest;

class UpdateQuickConnectNameRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateQuickConnectNameRequestPrivate(const ConnectRequest::Action action,
                                   UpdateQuickConnectNameRequest * const q);
    UpdateQuickConnectNameRequestPrivate(const UpdateQuickConnectNameRequestPrivate &other,
                                   UpdateQuickConnectNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQuickConnectNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
