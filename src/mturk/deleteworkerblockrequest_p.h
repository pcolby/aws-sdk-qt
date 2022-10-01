// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKERBLOCKREQUEST_P_H
#define QTAWS_DELETEWORKERBLOCKREQUEST_P_H

#include "mturkrequest_p.h"
#include "deleteworkerblockrequest.h"

namespace QtAws {
namespace MTurk {

class DeleteWorkerBlockRequest;

class DeleteWorkerBlockRequestPrivate : public MTurkRequestPrivate {

public:
    DeleteWorkerBlockRequestPrivate(const MTurkRequest::Action action,
                                   DeleteWorkerBlockRequest * const q);
    DeleteWorkerBlockRequestPrivate(const DeleteWorkerBlockRequestPrivate &other,
                                   DeleteWorkerBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkerBlockRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
