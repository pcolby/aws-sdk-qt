// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNREGISTERCONNECTORREQUEST_P_H
#define QTAWS_UNREGISTERCONNECTORREQUEST_P_H

#include "appflowrequest_p.h"
#include "unregisterconnectorrequest.h"

namespace QtAws {
namespace Appflow {

class UnregisterConnectorRequest;

class UnregisterConnectorRequestPrivate : public AppflowRequestPrivate {

public:
    UnregisterConnectorRequestPrivate(const AppflowRequest::Action action,
                                   UnregisterConnectorRequest * const q);
    UnregisterConnectorRequestPrivate(const UnregisterConnectorRequestPrivate &other,
                                   UnregisterConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnregisterConnectorRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
