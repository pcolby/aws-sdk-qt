// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENODEGROUPREQUEST_P_H
#define QTAWS_DELETENODEGROUPREQUEST_P_H

#include "eksrequest_p.h"
#include "deletenodegrouprequest.h"

namespace QtAws {
namespace Eks {

class DeleteNodegroupRequest;

class DeleteNodegroupRequestPrivate : public EksRequestPrivate {

public:
    DeleteNodegroupRequestPrivate(const EksRequest::Action action,
                                   DeleteNodegroupRequest * const q);
    DeleteNodegroupRequestPrivate(const DeleteNodegroupRequestPrivate &other,
                                   DeleteNodegroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNodegroupRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
