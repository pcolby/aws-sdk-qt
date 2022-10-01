// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERREQUEST_P_H
#define QTAWS_MODIFYCLUSTERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclusterrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterRequest;

class ModifyClusterRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterRequest * const q);
    ModifyClusterRequestPrivate(const ModifyClusterRequestPrivate &other,
                                   ModifyClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
