// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONREQUEST_P_H
#define QTAWS_CREATECONNECTIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "createconnectionrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateConnectionRequest;

class CreateConnectionRequestPrivate : public AppRunnerRequestPrivate {

public:
    CreateConnectionRequestPrivate(const AppRunnerRequest::Action action,
                                   CreateConnectionRequest * const q);
    CreateConnectionRequestPrivate(const CreateConnectionRequestPrivate &other,
                                   CreateConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectionRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
