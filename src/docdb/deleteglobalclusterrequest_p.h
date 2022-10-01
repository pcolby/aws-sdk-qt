// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALCLUSTERREQUEST_P_H
#define QTAWS_DELETEGLOBALCLUSTERREQUEST_P_H

#include "docdbrequest_p.h"
#include "deleteglobalclusterrequest.h"

namespace QtAws {
namespace DocDb {

class DeleteGlobalClusterRequest;

class DeleteGlobalClusterRequestPrivate : public DocDbRequestPrivate {

public:
    DeleteGlobalClusterRequestPrivate(const DocDbRequest::Action action,
                                   DeleteGlobalClusterRequest * const q);
    DeleteGlobalClusterRequestPrivate(const DeleteGlobalClusterRequestPrivate &other,
                                   DeleteGlobalClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGlobalClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
