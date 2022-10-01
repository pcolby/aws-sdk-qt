// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERREQUEST_P_H
#define QTAWS_STOPCRAWLERREQUEST_P_H

#include "gluerequest_p.h"
#include "stopcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class StopCrawlerRequest;

class StopCrawlerRequestPrivate : public GlueRequestPrivate {

public:
    StopCrawlerRequestPrivate(const GlueRequest::Action action,
                                   StopCrawlerRequest * const q);
    StopCrawlerRequestPrivate(const StopCrawlerRequestPrivate &other,
                                   StopCrawlerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
