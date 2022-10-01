// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECRAWLERREQUEST_P_H
#define QTAWS_CREATECRAWLERREQUEST_P_H

#include "gluerequest_p.h"
#include "createcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class CreateCrawlerRequest;

class CreateCrawlerRequestPrivate : public GlueRequestPrivate {

public:
    CreateCrawlerRequestPrivate(const GlueRequest::Action action,
                                   CreateCrawlerRequest * const q);
    CreateCrawlerRequestPrivate(const CreateCrawlerRequestPrivate &other,
                                   CreateCrawlerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
