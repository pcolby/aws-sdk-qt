// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONNECTORREQUEST_P_H
#define QTAWS_REGISTERCONNECTORREQUEST_P_H

#include "appflowrequest_p.h"
#include "registerconnectorrequest.h"

namespace QtAws {
namespace Appflow {

class RegisterConnectorRequest;

class RegisterConnectorRequestPrivate : public AppflowRequestPrivate {

public:
    RegisterConnectorRequestPrivate(const AppflowRequest::Action action,
                                   RegisterConnectorRequest * const q);
    RegisterConnectorRequestPrivate(const RegisterConnectorRequestPrivate &other,
                                   RegisterConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterConnectorRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
