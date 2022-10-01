// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONREQUEST_P_H
#define QTAWS_STARTREPLICATIONREQUEST_P_H

#include "mgnrequest_p.h"
#include "startreplicationrequest.h"

namespace QtAws {
namespace Mgn {

class StartReplicationRequest;

class StartReplicationRequestPrivate : public MgnRequestPrivate {

public:
    StartReplicationRequestPrivate(const MgnRequest::Action action,
                                   StartReplicationRequest * const q);
    StartReplicationRequestPrivate(const StartReplicationRequestPrivate &other,
                                   StartReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartReplicationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
