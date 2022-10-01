// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECLUSTERREQUEST_P_H
#define QTAWS_PAUSECLUSTERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "pauseclusterrequest.h"

namespace QtAws {
namespace Redshift {

class PauseClusterRequest;

class PauseClusterRequestPrivate : public RedshiftRequestPrivate {

public:
    PauseClusterRequestPrivate(const RedshiftRequest::Action action,
                                   PauseClusterRequest * const q);
    PauseClusterRequestPrivate(const PauseClusterRequestPrivate &other,
                                   PauseClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(PauseClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
