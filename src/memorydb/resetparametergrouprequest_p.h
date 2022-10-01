// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPARAMETERGROUPREQUEST_P_H
#define QTAWS_RESETPARAMETERGROUPREQUEST_P_H

#include "memorydbrequest_p.h"
#include "resetparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class ResetParameterGroupRequest;

class ResetParameterGroupRequestPrivate : public MemoryDbRequestPrivate {

public:
    ResetParameterGroupRequestPrivate(const MemoryDbRequest::Action action,
                                   ResetParameterGroupRequest * const q);
    ResetParameterGroupRequestPrivate(const ResetParameterGroupRequestPrivate &other,
                                   ResetParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetParameterGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
