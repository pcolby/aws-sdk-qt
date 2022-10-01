// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORPARTITIONREQUEST_P_H
#define QTAWS_GETCOLUMNSTATISTICSFORPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "getcolumnstatisticsforpartitionrequest.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForPartitionRequest;

class GetColumnStatisticsForPartitionRequestPrivate : public GlueRequestPrivate {

public:
    GetColumnStatisticsForPartitionRequestPrivate(const GlueRequest::Action action,
                                   GetColumnStatisticsForPartitionRequest * const q);
    GetColumnStatisticsForPartitionRequestPrivate(const GetColumnStatisticsForPartitionRequestPrivate &other,
                                   GetColumnStatisticsForPartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetColumnStatisticsForPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
