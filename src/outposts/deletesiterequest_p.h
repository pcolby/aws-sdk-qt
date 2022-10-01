// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESITEREQUEST_P_H
#define QTAWS_DELETESITEREQUEST_P_H

#include "outpostsrequest_p.h"
#include "deletesiterequest.h"

namespace QtAws {
namespace Outposts {

class DeleteSiteRequest;

class DeleteSiteRequestPrivate : public OutpostsRequestPrivate {

public:
    DeleteSiteRequestPrivate(const OutpostsRequest::Action action,
                                   DeleteSiteRequest * const q);
    DeleteSiteRequestPrivate(const DeleteSiteRequestPrivate &other,
                                   DeleteSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSiteRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
