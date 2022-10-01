// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERSCHEDULEREQUEST_P_H
#define QTAWS_STARTCRAWLERSCHEDULEREQUEST_P_H

#include "gluerequest_p.h"
#include "startcrawlerschedulerequest.h"

namespace QtAws {
namespace Glue {

class StartCrawlerScheduleRequest;

class StartCrawlerScheduleRequestPrivate : public GlueRequestPrivate {

public:
    StartCrawlerScheduleRequestPrivate(const GlueRequest::Action action,
                                   StartCrawlerScheduleRequest * const q);
    StartCrawlerScheduleRequestPrivate(const StartCrawlerScheduleRequestPrivate &other,
                                   StartCrawlerScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCrawlerScheduleRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
