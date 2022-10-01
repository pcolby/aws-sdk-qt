// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOLUMNSTATISTICSFORTABLEREQUEST_P_H
#define QTAWS_UPDATECOLUMNSTATISTICSFORTABLEREQUEST_P_H

#include "gluerequest_p.h"
#include "updatecolumnstatisticsfortablerequest.h"

namespace QtAws {
namespace Glue {

class UpdateColumnStatisticsForTableRequest;

class UpdateColumnStatisticsForTableRequestPrivate : public GlueRequestPrivate {

public:
    UpdateColumnStatisticsForTableRequestPrivate(const GlueRequest::Action action,
                                   UpdateColumnStatisticsForTableRequest * const q);
    UpdateColumnStatisticsForTableRequestPrivate(const UpdateColumnStatisticsForTableRequestPrivate &other,
                                   UpdateColumnStatisticsForTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateColumnStatisticsForTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
