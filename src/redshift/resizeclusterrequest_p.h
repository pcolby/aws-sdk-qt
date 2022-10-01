// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESIZECLUSTERREQUEST_P_H
#define QTAWS_RESIZECLUSTERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "resizeclusterrequest.h"

namespace QtAws {
namespace Redshift {

class ResizeClusterRequest;

class ResizeClusterRequestPrivate : public RedshiftRequestPrivate {

public:
    ResizeClusterRequestPrivate(const RedshiftRequest::Action action,
                                   ResizeClusterRequest * const q);
    ResizeClusterRequestPrivate(const ResizeClusterRequestPrivate &other,
                                   ResizeClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResizeClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
