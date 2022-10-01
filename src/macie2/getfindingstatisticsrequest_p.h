// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSTATISTICSREQUEST_P_H
#define QTAWS_GETFINDINGSTATISTICSREQUEST_P_H

#include "macie2request_p.h"
#include "getfindingstatisticsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingStatisticsRequest;

class GetFindingStatisticsRequestPrivate : public Macie2RequestPrivate {

public:
    GetFindingStatisticsRequestPrivate(const Macie2Request::Action action,
                                   GetFindingStatisticsRequest * const q);
    GetFindingStatisticsRequestPrivate(const GetFindingStatisticsRequestPrivate &other,
                                   GetFindingStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingStatisticsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
