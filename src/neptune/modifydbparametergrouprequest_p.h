// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPARAMETERGROUPREQUEST_P_H
#define QTAWS_MODIFYDBPARAMETERGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifydbparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBParameterGroupRequest;

class ModifyDBParameterGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyDBParameterGroupRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyDBParameterGroupRequest * const q);
    ModifyDBParameterGroupRequestPrivate(const ModifyDBParameterGroupRequestPrivate &other,
                                   ModifyDBParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
