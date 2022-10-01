// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGELIMITREQUEST_P_H
#define QTAWS_GETUSAGELIMITREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getusagelimitrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetUsageLimitRequest;

class GetUsageLimitRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetUsageLimitRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetUsageLimitRequest * const q);
    GetUsageLimitRequestPrivate(const GetUsageLimitRequestPrivate &other,
                                   GetUsageLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsageLimitRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
