// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATEDBPARAMETERGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "createdbparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBParameterGroupRequest;

class CreateDBParameterGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    CreateDBParameterGroupRequestPrivate(const NeptuneRequest::Action action,
                                   CreateDBParameterGroupRequest * const q);
    CreateDBParameterGroupRequestPrivate(const CreateDBParameterGroupRequestPrivate &other,
                                   CreateDBParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
