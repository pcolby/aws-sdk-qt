// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_DELETECLUSTERPARAMETERGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterParameterGroupRequest;

class DeleteClusterParameterGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteClusterParameterGroupRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteClusterParameterGroupRequest * const q);
    DeleteClusterParameterGroupRequestPrivate(const DeleteClusterParameterGroupRequestPrivate &other,
                                   DeleteClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
