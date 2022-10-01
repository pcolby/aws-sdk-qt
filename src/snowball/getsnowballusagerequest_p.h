// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNOWBALLUSAGEREQUEST_P_H
#define QTAWS_GETSNOWBALLUSAGEREQUEST_P_H

#include "snowballrequest_p.h"
#include "getsnowballusagerequest.h"

namespace QtAws {
namespace Snowball {

class GetSnowballUsageRequest;

class GetSnowballUsageRequestPrivate : public SnowballRequestPrivate {

public:
    GetSnowballUsageRequestPrivate(const SnowballRequest::Action action,
                                   GetSnowballUsageRequest * const q);
    GetSnowballUsageRequestPrivate(const GetSnowballUsageRequestPrivate &other,
                                   GetSnowballUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSnowballUsageRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
