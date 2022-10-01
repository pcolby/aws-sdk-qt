// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSUBNETGROUPREQUEST_P_H
#define QTAWS_CREATEDBSUBNETGROUPREQUEST_P_H

#include "docdbrequest_p.h"
#include "createdbsubnetgrouprequest.h"

namespace QtAws {
namespace DocDb {

class CreateDBSubnetGroupRequest;

class CreateDBSubnetGroupRequestPrivate : public DocDbRequestPrivate {

public:
    CreateDBSubnetGroupRequestPrivate(const DocDbRequest::Action action,
                                   CreateDBSubnetGroupRequest * const q);
    CreateDBSubnetGroupRequestPrivate(const CreateDBSubnetGroupRequestPrivate &other,
                                   CreateDBSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBSubnetGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
