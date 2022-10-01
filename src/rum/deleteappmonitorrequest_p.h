// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPMONITORREQUEST_P_H
#define QTAWS_DELETEAPPMONITORREQUEST_P_H

#include "rumrequest_p.h"
#include "deleteappmonitorrequest.h"

namespace QtAws {
namespace Rum {

class DeleteAppMonitorRequest;

class DeleteAppMonitorRequestPrivate : public RumRequestPrivate {

public:
    DeleteAppMonitorRequestPrivate(const RumRequest::Action action,
                                   DeleteAppMonitorRequest * const q);
    DeleteAppMonitorRequestPrivate(const DeleteAppMonitorRequestPrivate &other,
                                   DeleteAppMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppMonitorRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
