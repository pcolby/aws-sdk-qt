// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITEREQUEST_P_H
#define QTAWS_UPDATESITEREQUEST_P_H

#include "outpostsrequest_p.h"
#include "updatesiterequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteRequest;

class UpdateSiteRequestPrivate : public OutpostsRequestPrivate {

public:
    UpdateSiteRequestPrivate(const OutpostsRequest::Action action,
                                   UpdateSiteRequest * const q);
    UpdateSiteRequestPrivate(const UpdateSiteRequestPrivate &other,
                                   UpdateSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSiteRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
