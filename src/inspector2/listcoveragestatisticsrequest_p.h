// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGESTATISTICSREQUEST_P_H
#define QTAWS_LISTCOVERAGESTATISTICSREQUEST_P_H

#include "inspector2request_p.h"
#include "listcoveragestatisticsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageStatisticsRequest;

class ListCoverageStatisticsRequestPrivate : public Inspector2RequestPrivate {

public:
    ListCoverageStatisticsRequestPrivate(const Inspector2Request::Action action,
                                   ListCoverageStatisticsRequest * const q);
    ListCoverageStatisticsRequestPrivate(const ListCoverageStatisticsRequestPrivate &other,
                                   ListCoverageStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoverageStatisticsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
