// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICESINPLACEMENTREQUEST_H
#define QTAWS_GETDEVICESINPLACEMENTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class GetDevicesInPlacementRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT GetDevicesInPlacementRequest : public IoT1ClickProjectsRequest {

public:
    GetDevicesInPlacementRequest(const GetDevicesInPlacementRequest &other);
    GetDevicesInPlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicesInPlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
