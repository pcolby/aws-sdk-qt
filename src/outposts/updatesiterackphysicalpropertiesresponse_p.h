// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITERACKPHYSICALPROPERTIESRESPONSE_P_H
#define QTAWS_UPDATESITERACKPHYSICALPROPERTIESRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteRackPhysicalPropertiesResponse;

class UpdateSiteRackPhysicalPropertiesResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit UpdateSiteRackPhysicalPropertiesResponsePrivate(UpdateSiteRackPhysicalPropertiesResponse * const q);

    void parseUpdateSiteRackPhysicalPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSiteRackPhysicalPropertiesResponse)
    Q_DISABLE_COPY(UpdateSiteRackPhysicalPropertiesResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
