// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYWORKERSREQUEST_P_H
#define QTAWS_NOTIFYWORKERSREQUEST_P_H

#include "mturkrequest_p.h"
#include "notifyworkersrequest.h"

namespace QtAws {
namespace MTurk {

class NotifyWorkersRequest;

class NotifyWorkersRequestPrivate : public MTurkRequestPrivate {

public:
    NotifyWorkersRequestPrivate(const MTurkRequest::Action action,
                                   NotifyWorkersRequest * const q);
    NotifyWorkersRequestPrivate(const NotifyWorkersRequestPrivate &other,
                                   NotifyWorkersRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyWorkersRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
