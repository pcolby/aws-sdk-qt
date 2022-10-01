// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERREQUEST_P_H
#define QTAWS_UPDATECRAWLERREQUEST_P_H

#include "gluerequest_p.h"
#include "updatecrawlerrequest.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerRequest;

class UpdateCrawlerRequestPrivate : public GlueRequestPrivate {

public:
    UpdateCrawlerRequestPrivate(const GlueRequest::Action action,
                                   UpdateCrawlerRequest * const q);
    UpdateCrawlerRequestPrivate(const UpdateCrawlerRequestPrivate &other,
                                   UpdateCrawlerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
