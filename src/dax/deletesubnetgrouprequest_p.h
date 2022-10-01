// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETGROUPREQUEST_P_H
#define QTAWS_DELETESUBNETGROUPREQUEST_P_H

#include "daxrequest_p.h"
#include "deletesubnetgrouprequest.h"

namespace QtAws {
namespace Dax {

class DeleteSubnetGroupRequest;

class DeleteSubnetGroupRequestPrivate : public DaxRequestPrivate {

public:
    DeleteSubnetGroupRequestPrivate(const DaxRequest::Action action,
                                   DeleteSubnetGroupRequest * const q);
    DeleteSubnetGroupRequestPrivate(const DeleteSubnetGroupRequestPrivate &other,
                                   DeleteSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSubnetGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
