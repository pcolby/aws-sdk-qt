// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARAMETERGROUPREQUEST_P_H
#define QTAWS_UPDATEPARAMETERGROUPREQUEST_P_H

#include "memorydbrequest_p.h"
#include "updateparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateParameterGroupRequest;

class UpdateParameterGroupRequestPrivate : public MemoryDbRequestPrivate {

public:
    UpdateParameterGroupRequestPrivate(const MemoryDbRequest::Action action,
                                   UpdateParameterGroupRequest * const q);
    UpdateParameterGroupRequestPrivate(const UpdateParameterGroupRequestPrivate &other,
                                   UpdateParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateParameterGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
