// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATECLUSTERPARAMETERGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterParameterGroupRequest;

class CreateClusterParameterGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateClusterParameterGroupRequestPrivate(const RedshiftRequest::Action action,
                                   CreateClusterParameterGroupRequest * const q);
    CreateClusterParameterGroupRequestPrivate(const CreateClusterParameterGroupRequestPrivate &other,
                                   CreateClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
