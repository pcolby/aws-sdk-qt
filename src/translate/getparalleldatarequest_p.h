// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARALLELDATAREQUEST_P_H
#define QTAWS_GETPARALLELDATAREQUEST_P_H

#include "translaterequest_p.h"
#include "getparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class GetParallelDataRequest;

class GetParallelDataRequestPrivate : public TranslateRequestPrivate {

public:
    GetParallelDataRequestPrivate(const TranslateRequest::Action action,
                                   GetParallelDataRequest * const q);
    GetParallelDataRequestPrivate(const GetParallelDataRequestPrivate &other,
                                   GetParallelDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
