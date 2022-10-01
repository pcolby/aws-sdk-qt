// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSECASEREQUEST_P_H
#define QTAWS_CREATEUSECASEREQUEST_P_H

#include "connectrequest_p.h"
#include "createusecaserequest.h"

namespace QtAws {
namespace Connect {

class CreateUseCaseRequest;

class CreateUseCaseRequestPrivate : public ConnectRequestPrivate {

public:
    CreateUseCaseRequestPrivate(const ConnectRequest::Action action,
                                   CreateUseCaseRequest * const q);
    CreateUseCaseRequestPrivate(const CreateUseCaseRequestPrivate &other,
                                   CreateUseCaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUseCaseRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
