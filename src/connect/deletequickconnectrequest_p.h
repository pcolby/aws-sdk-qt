// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUICKCONNECTREQUEST_P_H
#define QTAWS_DELETEQUICKCONNECTREQUEST_P_H

#include "connectrequest_p.h"
#include "deletequickconnectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteQuickConnectRequest;

class DeleteQuickConnectRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteQuickConnectRequestPrivate(const ConnectRequest::Action action,
                                   DeleteQuickConnectRequest * const q);
    DeleteQuickConnectRequestPrivate(const DeleteQuickConnectRequestPrivate &other,
                                   DeleteQuickConnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQuickConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
