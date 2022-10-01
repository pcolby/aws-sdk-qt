// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSREQUEST_P_H
#define QTAWS_DELETEMEMBERSREQUEST_P_H

#include "detectiverequest_p.h"
#include "deletemembersrequest.h"

namespace QtAws {
namespace Detective {

class DeleteMembersRequest;

class DeleteMembersRequestPrivate : public DetectiveRequestPrivate {

public:
    DeleteMembersRequestPrivate(const DetectiveRequest::Action action,
                                   DeleteMembersRequest * const q);
    DeleteMembersRequestPrivate(const DeleteMembersRequestPrivate &other,
                                   DeleteMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMembersRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
