// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERBLOCKREQUEST_P_H
#define QTAWS_CREATEWORKERBLOCKREQUEST_P_H

#include "mturkrequest_p.h"
#include "createworkerblockrequest.h"

namespace QtAws {
namespace MTurk {

class CreateWorkerBlockRequest;

class CreateWorkerBlockRequestPrivate : public MTurkRequestPrivate {

public:
    CreateWorkerBlockRequestPrivate(const MTurkRequest::Action action,
                                   CreateWorkerBlockRequest * const q);
    CreateWorkerBlockRequestPrivate(const CreateWorkerBlockRequestPrivate &other,
                                   CreateWorkerBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkerBlockRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
