// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITERACKPHYSICALPROPERTIESREQUEST_H
#define QTAWS_UPDATESITERACKPHYSICALPROPERTIESREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteRackPhysicalPropertiesRequestPrivate;

class QTAWSOUTPOSTS_EXPORT UpdateSiteRackPhysicalPropertiesRequest : public OutpostsRequest {

public:
    UpdateSiteRackPhysicalPropertiesRequest(const UpdateSiteRackPhysicalPropertiesRequest &other);
    UpdateSiteRackPhysicalPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteRackPhysicalPropertiesRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
