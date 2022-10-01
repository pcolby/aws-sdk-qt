// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYRUNTIMESTATISTICSREQUEST_P_H
#define QTAWS_GETQUERYRUNTIMESTATISTICSREQUEST_P_H

#include "athenarequest_p.h"
#include "getqueryruntimestatisticsrequest.h"

namespace QtAws {
namespace Athena {

class GetQueryRuntimeStatisticsRequest;

class GetQueryRuntimeStatisticsRequestPrivate : public AthenaRequestPrivate {

public:
    GetQueryRuntimeStatisticsRequestPrivate(const AthenaRequest::Action action,
                                   GetQueryRuntimeStatisticsRequest * const q);
    GetQueryRuntimeStatisticsRequestPrivate(const GetQueryRuntimeStatisticsRequestPrivate &other,
                                   GetQueryRuntimeStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueryRuntimeStatisticsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
