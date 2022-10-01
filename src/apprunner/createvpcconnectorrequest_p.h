// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCCONNECTORREQUEST_P_H
#define QTAWS_CREATEVPCCONNECTORREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "createvpcconnectorrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateVpcConnectorRequest;

class CreateVpcConnectorRequestPrivate : public AppRunnerRequestPrivate {

public:
    CreateVpcConnectorRequestPrivate(const AppRunnerRequest::Action action,
                                   CreateVpcConnectorRequest * const q);
    CreateVpcConnectorRequestPrivate(const CreateVpcConnectorRequestPrivate &other,
                                   CreateVpcConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcConnectorRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
