// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPREQUEST_P_H
#define QTAWS_DELETEWORKGROUPREQUEST_P_H

#include "athenarequest_p.h"
#include "deleteworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class DeleteWorkGroupRequest;

class DeleteWorkGroupRequestPrivate : public AthenaRequestPrivate {

public:
    DeleteWorkGroupRequestPrivate(const AthenaRequest::Action action,
                                   DeleteWorkGroupRequest * const q);
    DeleteWorkGroupRequestPrivate(const DeleteWorkGroupRequestPrivate &other,
                                   DeleteWorkGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkGroupRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
