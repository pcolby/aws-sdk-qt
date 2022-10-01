// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITEREQUEST_P_H
#define QTAWS_GETSITEREQUEST_P_H

#include "outpostsrequest_p.h"
#include "getsiterequest.h"

namespace QtAws {
namespace Outposts {

class GetSiteRequest;

class GetSiteRequestPrivate : public OutpostsRequestPrivate {

public:
    GetSiteRequestPrivate(const OutpostsRequest::Action action,
                                   GetSiteRequest * const q);
    GetSiteRequestPrivate(const GetSiteRequestPrivate &other,
                                   GetSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSiteRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
