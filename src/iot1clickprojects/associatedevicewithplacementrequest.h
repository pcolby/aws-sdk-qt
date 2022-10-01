// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHPLACEMENTREQUEST_H
#define QTAWS_ASSOCIATEDEVICEWITHPLACEMENTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class AssociateDeviceWithPlacementRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT AssociateDeviceWithPlacementRequest : public IoT1ClickProjectsRequest {

public:
    AssociateDeviceWithPlacementRequest(const AssociateDeviceWithPlacementRequest &other);
    AssociateDeviceWithPlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDeviceWithPlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
