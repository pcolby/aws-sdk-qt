// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITEADDRESSREQUEST_P_H
#define QTAWS_GETSITEADDRESSREQUEST_P_H

#include "outpostsrequest_p.h"
#include "getsiteaddressrequest.h"

namespace QtAws {
namespace Outposts {

class GetSiteAddressRequest;

class GetSiteAddressRequestPrivate : public OutpostsRequestPrivate {

public:
    GetSiteAddressRequestPrivate(const OutpostsRequest::Action action,
                                   GetSiteAddressRequest * const q);
    GetSiteAddressRequestPrivate(const GetSiteAddressRequestPrivate &other,
                                   GetSiteAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSiteAddressRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
