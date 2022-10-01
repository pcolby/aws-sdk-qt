// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERREQUEST_P_H
#define QTAWS_STARTCRAWLERREQUEST_P_H

#include "gluerequest_p.h"
#include "startcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class StartCrawlerRequest;

class StartCrawlerRequestPrivate : public GlueRequestPrivate {

public:
    StartCrawlerRequestPrivate(const GlueRequest::Action action,
                                   StartCrawlerRequest * const q);
    StartCrawlerRequestPrivate(const StartCrawlerRequestPrivate &other,
                                   StartCrawlerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
