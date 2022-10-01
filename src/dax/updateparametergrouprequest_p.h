// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARAMETERGROUPREQUEST_P_H
#define QTAWS_UPDATEPARAMETERGROUPREQUEST_P_H

#include "daxrequest_p.h"
#include "updateparametergrouprequest.h"

namespace QtAws {
namespace Dax {

class UpdateParameterGroupRequest;

class UpdateParameterGroupRequestPrivate : public DaxRequestPrivate {

public:
    UpdateParameterGroupRequestPrivate(const DaxRequest::Action action,
                                   UpdateParameterGroupRequest * const q);
    UpdateParameterGroupRequestPrivate(const UpdateParameterGroupRequestPrivate &other,
                                   UpdateParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateParameterGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
