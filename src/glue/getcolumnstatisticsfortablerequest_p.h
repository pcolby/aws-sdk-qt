// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORTABLEREQUEST_P_H
#define QTAWS_GETCOLUMNSTATISTICSFORTABLEREQUEST_P_H

#include "gluerequest_p.h"
#include "getcolumnstatisticsfortablerequest.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForTableRequest;

class GetColumnStatisticsForTableRequestPrivate : public GlueRequestPrivate {

public:
    GetColumnStatisticsForTableRequestPrivate(const GlueRequest::Action action,
                                   GetColumnStatisticsForTableRequest * const q);
    GetColumnStatisticsForTableRequestPrivate(const GetColumnStatisticsForTableRequestPrivate &other,
                                   GetColumnStatisticsForTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetColumnStatisticsForTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
