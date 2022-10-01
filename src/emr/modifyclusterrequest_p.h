// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERREQUEST_P_H
#define QTAWS_MODIFYCLUSTERREQUEST_P_H

#include "emrrequest_p.h"
#include "modifyclusterrequest.h"

namespace QtAws {
namespace Emr {

class ModifyClusterRequest;

class ModifyClusterRequestPrivate : public EmrRequestPrivate {

public:
    ModifyClusterRequestPrivate(const EmrRequest::Action action,
                                   ModifyClusterRequest * const q);
    ModifyClusterRequestPrivate(const ModifyClusterRequestPrivate &other,
                                   ModifyClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
