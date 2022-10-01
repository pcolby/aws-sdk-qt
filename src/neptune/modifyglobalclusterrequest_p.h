// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALCLUSTERREQUEST_P_H
#define QTAWS_MODIFYGLOBALCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifyglobalclusterrequest.h"

namespace QtAws {
namespace Neptune {

class ModifyGlobalClusterRequest;

class ModifyGlobalClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyGlobalClusterRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyGlobalClusterRequest * const q);
    ModifyGlobalClusterRequestPrivate(const ModifyGlobalClusterRequestPrivate &other,
                                   ModifyGlobalClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyGlobalClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
