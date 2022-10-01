// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARALLELDATAREQUEST_P_H
#define QTAWS_LISTPARALLELDATAREQUEST_P_H

#include "translaterequest_p.h"
#include "listparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class ListParallelDataRequest;

class ListParallelDataRequestPrivate : public TranslateRequestPrivate {

public:
    ListParallelDataRequestPrivate(const TranslateRequest::Action action,
                                   ListParallelDataRequest * const q);
    ListParallelDataRequestPrivate(const ListParallelDataRequestPrivate &other,
                                   ListParallelDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
