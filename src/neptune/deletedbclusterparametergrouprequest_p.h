// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_DELETEDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "deletedbclusterparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterParameterGroupRequest;

class DeleteDBClusterParameterGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    DeleteDBClusterParameterGroupRequestPrivate(const NeptuneRequest::Action action,
                                   DeleteDBClusterParameterGroupRequest * const q);
    DeleteDBClusterParameterGroupRequestPrivate(const DeleteDBClusterParameterGroupRequestPrivate &other,
                                   DeleteDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
