// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_DELETEDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "docdbrequest_p.h"
#include "deletedbclusterparametergrouprequest.h"

namespace QtAws {
namespace DocDb {

class DeleteDBClusterParameterGroupRequest;

class DeleteDBClusterParameterGroupRequestPrivate : public DocDbRequestPrivate {

public:
    DeleteDBClusterParameterGroupRequestPrivate(const DocDbRequest::Action action,
                                   DeleteDBClusterParameterGroupRequest * const q);
    DeleteDBClusterParameterGroupRequestPrivate(const DeleteDBClusterParameterGroupRequestPrivate &other,
                                   DeleteDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterParameterGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
