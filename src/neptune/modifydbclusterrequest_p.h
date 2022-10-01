// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifydbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterRequest;

class ModifyDBClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyDBClusterRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyDBClusterRequest * const q);
    ModifyDBClusterRequestPrivate(const ModifyDBClusterRequestPrivate &other,
                                   ModifyDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
