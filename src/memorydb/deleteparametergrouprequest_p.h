// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERGROUPREQUEST_P_H
#define QTAWS_DELETEPARAMETERGROUPREQUEST_P_H

#include "memorydbrequest_p.h"
#include "deleteparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteParameterGroupRequest;

class DeleteParameterGroupRequestPrivate : public MemoryDbRequestPrivate {

public:
    DeleteParameterGroupRequestPrivate(const MemoryDbRequest::Action action,
                                   DeleteParameterGroupRequest * const q);
    DeleteParameterGroupRequestPrivate(const DeleteParameterGroupRequestPrivate &other,
                                   DeleteParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteParameterGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
