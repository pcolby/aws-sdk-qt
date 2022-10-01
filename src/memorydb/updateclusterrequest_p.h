// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERREQUEST_P_H
#define QTAWS_UPDATECLUSTERREQUEST_P_H

#include "memorydbrequest_p.h"
#include "updateclusterrequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateClusterRequest;

class UpdateClusterRequestPrivate : public MemoryDbRequestPrivate {

public:
    UpdateClusterRequestPrivate(const MemoryDbRequest::Action action,
                                   UpdateClusterRequest * const q);
    UpdateClusterRequestPrivate(const UpdateClusterRequestPrivate &other,
                                   UpdateClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
