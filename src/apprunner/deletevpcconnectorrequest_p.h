// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCCONNECTORREQUEST_P_H
#define QTAWS_DELETEVPCCONNECTORREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "deletevpcconnectorrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteVpcConnectorRequest;

class DeleteVpcConnectorRequestPrivate : public AppRunnerRequestPrivate {

public:
    DeleteVpcConnectorRequestPrivate(const AppRunnerRequest::Action action,
                                   DeleteVpcConnectorRequest * const q);
    DeleteVpcConnectorRequestPrivate(const DeleteVpcConnectorRequestPrivate &other,
                                   DeleteVpcConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcConnectorRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
