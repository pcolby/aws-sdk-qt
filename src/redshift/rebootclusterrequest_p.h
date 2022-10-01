// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCLUSTERREQUEST_P_H
#define QTAWS_REBOOTCLUSTERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "rebootclusterrequest.h"

namespace QtAws {
namespace Redshift {

class RebootClusterRequest;

class RebootClusterRequestPrivate : public RedshiftRequestPrivate {

public:
    RebootClusterRequestPrivate(const RedshiftRequest::Action action,
                                   RebootClusterRequest * const q);
    RebootClusterRequestPrivate(const RebootClusterRequestPrivate &other,
                                   RebootClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
