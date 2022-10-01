// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERDBREVISIONREQUEST_P_H
#define QTAWS_MODIFYCLUSTERDBREVISIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclusterdbrevisionrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterDbRevisionRequest;

class ModifyClusterDbRevisionRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterDbRevisionRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterDbRevisionRequest * const q);
    ModifyClusterDbRevisionRequestPrivate(const ModifyClusterDbRevisionRequestPrivate &other,
                                   ModifyClusterDbRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterDbRevisionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
