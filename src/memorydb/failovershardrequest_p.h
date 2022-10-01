// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERSHARDREQUEST_P_H
#define QTAWS_FAILOVERSHARDREQUEST_P_H

#include "memorydbrequest_p.h"
#include "failovershardrequest.h"

namespace QtAws {
namespace MemoryDb {

class FailoverShardRequest;

class FailoverShardRequestPrivate : public MemoryDbRequestPrivate {

public:
    FailoverShardRequestPrivate(const MemoryDbRequest::Action action,
                                   FailoverShardRequest * const q);
    FailoverShardRequestPrivate(const FailoverShardRequestPrivate &other,
                                   FailoverShardRequest * const q);

private:
    Q_DECLARE_PUBLIC(FailoverShardRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
