// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECRAWLERREQUEST_P_H
#define QTAWS_DELETECRAWLERREQUEST_P_H

#include "gluerequest_p.h"
#include "deletecrawlerrequest.h"

namespace QtAws {
namespace Glue {

class DeleteCrawlerRequest;

class DeleteCrawlerRequestPrivate : public GlueRequestPrivate {

public:
    DeleteCrawlerRequestPrivate(const GlueRequest::Action action,
                                   DeleteCrawlerRequest * const q);
    DeleteCrawlerRequestPrivate(const DeleteCrawlerRequestPrivate &other,
                                   DeleteCrawlerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
