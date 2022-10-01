// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOMEMBERREQUEST_P_H
#define QTAWS_DELETESTUDIOMEMBERREQUEST_P_H

#include "nimblerequest_p.h"
#include "deletestudiomemberrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioMemberRequest;

class DeleteStudioMemberRequestPrivate : public NimbleRequestPrivate {

public:
    DeleteStudioMemberRequestPrivate(const NimbleRequest::Action action,
                                   DeleteStudioMemberRequest * const q);
    DeleteStudioMemberRequestPrivate(const DeleteStudioMemberRequestPrivate &other,
                                   DeleteStudioMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStudioMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
