// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACLREQUEST_P_H
#define QTAWS_CREATEACLREQUEST_P_H

#include "memorydbrequest_p.h"
#include "createaclrequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateACLRequest;

class CreateACLRequestPrivate : public MemoryDbRequestPrivate {

public:
    CreateACLRequestPrivate(const MemoryDbRequest::Action action,
                                   CreateACLRequest * const q);
    CreateACLRequestPrivate(const CreateACLRequestPrivate &other,
                                   CreateACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateACLRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
