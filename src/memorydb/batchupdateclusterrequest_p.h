// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATECLUSTERREQUEST_P_H
#define QTAWS_BATCHUPDATECLUSTERREQUEST_P_H

#include "memorydbrequest_p.h"
#include "batchupdateclusterrequest.h"

namespace QtAws {
namespace MemoryDb {

class BatchUpdateClusterRequest;

class BatchUpdateClusterRequestPrivate : public MemoryDbRequestPrivate {

public:
    BatchUpdateClusterRequestPrivate(const MemoryDbRequest::Action action,
                                   BatchUpdateClusterRequest * const q);
    BatchUpdateClusterRequestPrivate(const BatchUpdateClusterRequestPrivate &other,
                                   BatchUpdateClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateClusterRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
