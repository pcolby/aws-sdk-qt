// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACLREQUEST_P_H
#define QTAWS_DELETEACLREQUEST_P_H

#include "memorydbrequest_p.h"
#include "deleteaclrequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteACLRequest;

class DeleteACLRequestPrivate : public MemoryDbRequestPrivate {

public:
    DeleteACLRequestPrivate(const MemoryDbRequest::Action action,
                                   DeleteACLRequest * const q);
    DeleteACLRequestPrivate(const DeleteACLRequestPrivate &other,
                                   DeleteACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteACLRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
