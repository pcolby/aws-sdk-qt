// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARALLELDATAREQUEST_P_H
#define QTAWS_DELETEPARALLELDATAREQUEST_P_H

#include "translaterequest_p.h"
#include "deleteparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class DeleteParallelDataRequest;

class DeleteParallelDataRequestPrivate : public TranslateRequestPrivate {

public:
    DeleteParallelDataRequestPrivate(const TranslateRequest::Action action,
                                   DeleteParallelDataRequest * const q);
    DeleteParallelDataRequestPrivate(const DeleteParallelDataRequestPrivate &other,
                                   DeleteParallelDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
