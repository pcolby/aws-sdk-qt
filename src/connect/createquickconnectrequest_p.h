// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUICKCONNECTREQUEST_P_H
#define QTAWS_CREATEQUICKCONNECTREQUEST_P_H

#include "connectrequest_p.h"
#include "createquickconnectrequest.h"

namespace QtAws {
namespace Connect {

class CreateQuickConnectRequest;

class CreateQuickConnectRequestPrivate : public ConnectRequestPrivate {

public:
    CreateQuickConnectRequestPrivate(const ConnectRequest::Action action,
                                   CreateQuickConnectRequest * const q);
    CreateQuickConnectRequestPrivate(const CreateQuickConnectRequestPrivate &other,
                                   CreateQuickConnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateQuickConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
