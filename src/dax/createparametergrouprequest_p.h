// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATEPARAMETERGROUPREQUEST_P_H

#include "daxrequest_p.h"
#include "createparametergrouprequest.h"

namespace QtAws {
namespace Dax {

class CreateParameterGroupRequest;

class CreateParameterGroupRequestPrivate : public DaxRequestPrivate {

public:
    CreateParameterGroupRequestPrivate(const DaxRequest::Action action,
                                   CreateParameterGroupRequest * const q);
    CreateParameterGroupRequestPrivate(const CreateParameterGroupRequestPrivate &other,
                                   CreateParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateParameterGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
