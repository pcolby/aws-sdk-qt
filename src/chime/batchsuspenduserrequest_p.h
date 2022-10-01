// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSUSPENDUSERREQUEST_P_H
#define QTAWS_BATCHSUSPENDUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "batchsuspenduserrequest.h"

namespace QtAws {
namespace Chime {

class BatchSuspendUserRequest;

class BatchSuspendUserRequestPrivate : public ChimeRequestPrivate {

public:
    BatchSuspendUserRequestPrivate(const ChimeRequest::Action action,
                                   BatchSuspendUserRequest * const q);
    BatchSuspendUserRequestPrivate(const BatchSuspendUserRequestPrivate &other,
                                   BatchSuspendUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchSuspendUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
