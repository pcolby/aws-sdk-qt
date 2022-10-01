// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPMONITORREQUEST_P_H
#define QTAWS_CREATEAPPMONITORREQUEST_P_H

#include "rumrequest_p.h"
#include "createappmonitorrequest.h"

namespace QtAws {
namespace Rum {

class CreateAppMonitorRequest;

class CreateAppMonitorRequestPrivate : public RumRequestPrivate {

public:
    CreateAppMonitorRequestPrivate(const RumRequest::Action action,
                                   CreateAppMonitorRequest * const q);
    CreateAppMonitorRequestPrivate(const CreateAppMonitorRequestPrivate &other,
                                   CreateAppMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppMonitorRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
