// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETGROUPREQUEST_P_H
#define QTAWS_UPDATESUBNETGROUPREQUEST_P_H

#include "memorydbrequest_p.h"
#include "updatesubnetgrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateSubnetGroupRequest;

class UpdateSubnetGroupRequestPrivate : public MemoryDbRequestPrivate {

public:
    UpdateSubnetGroupRequestPrivate(const MemoryDbRequest::Action action,
                                   UpdateSubnetGroupRequest * const q);
    UpdateSubnetGroupRequestPrivate(const UpdateSubnetGroupRequestPrivate &other,
                                   UpdateSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubnetGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
