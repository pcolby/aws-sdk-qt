// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOLUMNSTATISTICSFORPARTITIONREQUEST_P_H
#define QTAWS_UPDATECOLUMNSTATISTICSFORPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "updatecolumnstatisticsforpartitionrequest.h"

namespace QtAws {
namespace Glue {

class UpdateColumnStatisticsForPartitionRequest;

class UpdateColumnStatisticsForPartitionRequestPrivate : public GlueRequestPrivate {

public:
    UpdateColumnStatisticsForPartitionRequestPrivate(const GlueRequest::Action action,
                                   UpdateColumnStatisticsForPartitionRequest * const q);
    UpdateColumnStatisticsForPartitionRequestPrivate(const UpdateColumnStatisticsForPartitionRequestPrivate &other,
                                   UpdateColumnStatisticsForPartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateColumnStatisticsForPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
