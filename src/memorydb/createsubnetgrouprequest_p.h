// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETGROUPREQUEST_P_H
#define QTAWS_CREATESUBNETGROUPREQUEST_P_H

#include "memorydbrequest_p.h"
#include "createsubnetgrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateSubnetGroupRequest;

class CreateSubnetGroupRequestPrivate : public MemoryDbRequestPrivate {

public:
    CreateSubnetGroupRequestPrivate(const MemoryDbRequest::Action action,
                                   CreateSubnetGroupRequest * const q);
    CreateSubnetGroupRequestPrivate(const CreateSubnetGroupRequestPrivate &other,
                                   CreateSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSubnetGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
