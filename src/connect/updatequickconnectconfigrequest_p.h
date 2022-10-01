// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTCONFIGREQUEST_P_H
#define QTAWS_UPDATEQUICKCONNECTCONFIGREQUEST_P_H

#include "connectrequest_p.h"
#include "updatequickconnectconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectConfigRequest;

class UpdateQuickConnectConfigRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateQuickConnectConfigRequestPrivate(const ConnectRequest::Action action,
                                   UpdateQuickConnectConfigRequest * const q);
    UpdateQuickConnectConfigRequestPrivate(const UpdateQuickConnectConfigRequestPrivate &other,
                                   UpdateQuickConnectConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQuickConnectConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
