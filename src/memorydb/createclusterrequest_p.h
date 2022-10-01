// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERREQUEST_P_H
#define QTAWS_CREATECLUSTERREQUEST_P_H

#include "memorydbrequest_p.h"
#include "createclusterrequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateClusterRequest;

class CreateClusterRequestPrivate : public MemoryDbRequestPrivate {

public:
    CreateClusterRequestPrivate(const MemoryDbRequest::Action action,
                                   CreateClusterRequest * const q);
    CreateClusterRequestPrivate(const CreateClusterRequestPrivate &other,
                                   CreateClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
