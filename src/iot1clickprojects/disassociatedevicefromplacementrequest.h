// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTREQUEST_H
#define QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DisassociateDeviceFromPlacementRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DisassociateDeviceFromPlacementRequest : public IoT1ClickProjectsRequest {

public:
    DisassociateDeviceFromPlacementRequest(const DisassociateDeviceFromPlacementRequest &other);
    DisassociateDeviceFromPlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDeviceFromPlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
