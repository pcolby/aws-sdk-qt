// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACLREQUEST_P_H
#define QTAWS_UPDATEACLREQUEST_P_H

#include "memorydbrequest_p.h"
#include "updateaclrequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateACLRequest;

class UpdateACLRequestPrivate : public MemoryDbRequestPrivate {

public:
    UpdateACLRequestPrivate(const MemoryDbRequest::Action action,
                                   UpdateACLRequest * const q);
    UpdateACLRequestPrivate(const UpdateACLRequestPrivate &other,
                                   UpdateACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateACLRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
