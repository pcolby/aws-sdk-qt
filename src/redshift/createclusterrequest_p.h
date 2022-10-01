// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERREQUEST_P_H
#define QTAWS_CREATECLUSTERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createclusterrequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterRequest;

class CreateClusterRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateClusterRequestPrivate(const RedshiftRequest::Action action,
                                   CreateClusterRequest * const q);
    CreateClusterRequestPrivate(const CreateClusterRequestPrivate &other,
                                   CreateClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
