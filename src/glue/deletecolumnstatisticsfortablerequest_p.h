// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLUMNSTATISTICSFORTABLEREQUEST_P_H
#define QTAWS_DELETECOLUMNSTATISTICSFORTABLEREQUEST_P_H

#include "gluerequest_p.h"
#include "deletecolumnstatisticsfortablerequest.h"

namespace QtAws {
namespace Glue {

class DeleteColumnStatisticsForTableRequest;

class DeleteColumnStatisticsForTableRequestPrivate : public GlueRequestPrivate {

public:
    DeleteColumnStatisticsForTableRequestPrivate(const GlueRequest::Action action,
                                   DeleteColumnStatisticsForTableRequest * const q);
    DeleteColumnStatisticsForTableRequestPrivate(const DeleteColumnStatisticsForTableRequestPrivate &other,
                                   DeleteColumnStatisticsForTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteColumnStatisticsForTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
