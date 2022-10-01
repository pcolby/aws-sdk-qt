// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONREQUEST_P_H
#define QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "deletecolumnstatisticsforpartitionrequest.h"

namespace QtAws {
namespace Glue {

class DeleteColumnStatisticsForPartitionRequest;

class DeleteColumnStatisticsForPartitionRequestPrivate : public GlueRequestPrivate {

public:
    DeleteColumnStatisticsForPartitionRequestPrivate(const GlueRequest::Action action,
                                   DeleteColumnStatisticsForPartitionRequest * const q);
    DeleteColumnStatisticsForPartitionRequestPrivate(const DeleteColumnStatisticsForPartitionRequestPrivate &other,
                                   DeleteColumnStatisticsForPartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteColumnStatisticsForPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
