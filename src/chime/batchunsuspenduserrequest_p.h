// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUNSUSPENDUSERREQUEST_P_H
#define QTAWS_BATCHUNSUSPENDUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "batchunsuspenduserrequest.h"

namespace QtAws {
namespace Chime {

class BatchUnsuspendUserRequest;

class BatchUnsuspendUserRequestPrivate : public ChimeRequestPrivate {

public:
    BatchUnsuspendUserRequestPrivate(const ChimeRequest::Action action,
                                   BatchUnsuspendUserRequest * const q);
    BatchUnsuspendUserRequestPrivate(const BatchUnsuspendUserRequestPrivate &other,
                                   BatchUnsuspendUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUnsuspendUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
