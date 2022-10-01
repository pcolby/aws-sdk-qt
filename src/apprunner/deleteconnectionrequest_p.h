// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONREQUEST_P_H
#define QTAWS_DELETECONNECTIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "deleteconnectionrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteConnectionRequest;

class DeleteConnectionRequestPrivate : public AppRunnerRequestPrivate {

public:
    DeleteConnectionRequestPrivate(const AppRunnerRequest::Action action,
                                   DeleteConnectionRequest * const q);
    DeleteConnectionRequestPrivate(const DeleteConnectionRequestPrivate &other,
                                   DeleteConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectionRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
