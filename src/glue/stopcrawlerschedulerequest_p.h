// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERSCHEDULEREQUEST_P_H
#define QTAWS_STOPCRAWLERSCHEDULEREQUEST_P_H

#include "gluerequest_p.h"
#include "stopcrawlerschedulerequest.h"

namespace QtAws {
namespace Glue {

class StopCrawlerScheduleRequest;

class StopCrawlerScheduleRequestPrivate : public GlueRequestPrivate {

public:
    StopCrawlerScheduleRequestPrivate(const GlueRequest::Action action,
                                   StopCrawlerScheduleRequest * const q);
    StopCrawlerScheduleRequestPrivate(const StopCrawlerScheduleRequestPrivate &other,
                                   StopCrawlerScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopCrawlerScheduleRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
