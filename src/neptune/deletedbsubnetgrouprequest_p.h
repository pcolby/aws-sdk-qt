// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSUBNETGROUPREQUEST_P_H
#define QTAWS_DELETEDBSUBNETGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "deletedbsubnetgrouprequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBSubnetGroupRequest;

class DeleteDBSubnetGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    DeleteDBSubnetGroupRequestPrivate(const NeptuneRequest::Action action,
                                   DeleteDBSubnetGroupRequest * const q);
    DeleteDBSubnetGroupRequestPrivate(const DeleteDBSubnetGroupRequestPrivate &other,
                                   DeleteDBSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBSubnetGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
