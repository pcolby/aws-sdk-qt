// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITEADDRESSREQUEST_P_H
#define QTAWS_UPDATESITEADDRESSREQUEST_P_H

#include "outpostsrequest_p.h"
#include "updatesiteaddressrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteAddressRequest;

class UpdateSiteAddressRequestPrivate : public OutpostsRequestPrivate {

public:
    UpdateSiteAddressRequestPrivate(const OutpostsRequest::Action action,
                                   UpdateSiteAddressRequest * const q);
    UpdateSiteAddressRequestPrivate(const UpdateSiteAddressRequestPrivate &other,
                                   UpdateSiteAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSiteAddressRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
