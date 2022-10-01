// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSTATUSREQUEST_P_H
#define QTAWS_PUTUSERSTATUSREQUEST_P_H

#include "connectrequest_p.h"
#include "putuserstatusrequest.h"

namespace QtAws {
namespace Connect {

class PutUserStatusRequest;

class PutUserStatusRequestPrivate : public ConnectRequestPrivate {

public:
    PutUserStatusRequestPrivate(const ConnectRequest::Action action,
                                   PutUserStatusRequest * const q);
    PutUserStatusRequestPrivate(const PutUserStatusRequestPrivate &other,
                                   PutUserStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutUserStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
