// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHARESREQUEST_P_H
#define QTAWS_GETRESOURCESHARESREQUEST_P_H

#include "ramrequest_p.h"
#include "getresourcesharesrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceSharesRequest;

class GetResourceSharesRequestPrivate : public RamRequestPrivate {

public:
    GetResourceSharesRequestPrivate(const RamRequest::Action action,
                                   GetResourceSharesRequest * const q);
    GetResourceSharesRequestPrivate(const GetResourceSharesRequestPrivate &other,
                                   GetResourceSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceSharesRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
