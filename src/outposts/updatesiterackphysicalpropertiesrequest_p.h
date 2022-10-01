// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITERACKPHYSICALPROPERTIESREQUEST_P_H
#define QTAWS_UPDATESITERACKPHYSICALPROPERTIESREQUEST_P_H

#include "outpostsrequest_p.h"
#include "updatesiterackphysicalpropertiesrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteRackPhysicalPropertiesRequest;

class UpdateSiteRackPhysicalPropertiesRequestPrivate : public OutpostsRequestPrivate {

public:
    UpdateSiteRackPhysicalPropertiesRequestPrivate(const OutpostsRequest::Action action,
                                   UpdateSiteRackPhysicalPropertiesRequest * const q);
    UpdateSiteRackPhysicalPropertiesRequestPrivate(const UpdateSiteRackPhysicalPropertiesRequestPrivate &other,
                                   UpdateSiteRackPhysicalPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSiteRackPhysicalPropertiesRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
