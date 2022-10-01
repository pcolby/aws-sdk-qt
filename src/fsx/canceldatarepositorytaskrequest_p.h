// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDATAREPOSITORYTASKREQUEST_P_H
#define QTAWS_CANCELDATAREPOSITORYTASKREQUEST_P_H

#include "fsxrequest_p.h"
#include "canceldatarepositorytaskrequest.h"

namespace QtAws {
namespace FSx {

class CancelDataRepositoryTaskRequest;

class CancelDataRepositoryTaskRequestPrivate : public FSxRequestPrivate {

public:
    CancelDataRepositoryTaskRequestPrivate(const FSxRequest::Action action,
                                   CancelDataRepositoryTaskRequest * const q);
    CancelDataRepositoryTaskRequestPrivate(const CancelDataRepositoryTaskRequestPrivate &other,
                                   CancelDataRepositoryTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelDataRepositoryTaskRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
