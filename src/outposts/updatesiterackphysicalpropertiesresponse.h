// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITERACKPHYSICALPROPERTIESRESPONSE_H
#define QTAWS_UPDATESITERACKPHYSICALPROPERTIESRESPONSE_H

#include "outpostsresponse.h"
#include "updatesiterackphysicalpropertiesrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteRackPhysicalPropertiesResponsePrivate;

class QTAWSOUTPOSTS_EXPORT UpdateSiteRackPhysicalPropertiesResponse : public OutpostsResponse {
    Q_OBJECT

public:
    UpdateSiteRackPhysicalPropertiesResponse(const UpdateSiteRackPhysicalPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSiteRackPhysicalPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteRackPhysicalPropertiesResponse)
    Q_DISABLE_COPY(UpdateSiteRackPhysicalPropertiesResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
