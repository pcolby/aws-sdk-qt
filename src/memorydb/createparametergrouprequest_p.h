// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATEPARAMETERGROUPREQUEST_P_H

#include "memorydbrequest_p.h"
#include "createparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateParameterGroupRequest;

class CreateParameterGroupRequestPrivate : public MemoryDbRequestPrivate {

public:
    CreateParameterGroupRequestPrivate(const MemoryDbRequest::Action action,
                                   CreateParameterGroupRequest * const q);
    CreateParameterGroupRequestPrivate(const CreateParameterGroupRequestPrivate &other,
                                   CreateParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateParameterGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
