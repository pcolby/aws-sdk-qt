// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERBYPRINCIPALIDREQUEST_P_H
#define QTAWS_DELETEUSERBYPRINCIPALIDREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deleteuserbyprincipalidrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteUserByPrincipalIdRequest;

class DeleteUserByPrincipalIdRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteUserByPrincipalIdRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteUserByPrincipalIdRequest * const q);
    DeleteUserByPrincipalIdRequestPrivate(const DeleteUserByPrincipalIdRequestPrivate &other,
                                   DeleteUserByPrincipalIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserByPrincipalIdRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
