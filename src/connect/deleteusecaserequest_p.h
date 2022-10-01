// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSECASEREQUEST_P_H
#define QTAWS_DELETEUSECASEREQUEST_P_H

#include "connectrequest_p.h"
#include "deleteusecaserequest.h"

namespace QtAws {
namespace Connect {

class DeleteUseCaseRequest;

class DeleteUseCaseRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteUseCaseRequestPrivate(const ConnectRequest::Action action,
                                   DeleteUseCaseRequest * const q);
    DeleteUseCaseRequestPrivate(const DeleteUseCaseRequestPrivate &other,
                                   DeleteUseCaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUseCaseRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
