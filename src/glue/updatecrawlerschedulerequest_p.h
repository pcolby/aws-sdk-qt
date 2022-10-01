// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERSCHEDULEREQUEST_P_H
#define QTAWS_UPDATECRAWLERSCHEDULEREQUEST_P_H

#include "gluerequest_p.h"
#include "updatecrawlerschedulerequest.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerScheduleRequest;

class UpdateCrawlerScheduleRequestPrivate : public GlueRequestPrivate {

public:
    UpdateCrawlerScheduleRequestPrivate(const GlueRequest::Action action,
                                   UpdateCrawlerScheduleRequest * const q);
    UpdateCrawlerScheduleRequestPrivate(const UpdateCrawlerScheduleRequestPrivate &other,
                                   UpdateCrawlerScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCrawlerScheduleRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
