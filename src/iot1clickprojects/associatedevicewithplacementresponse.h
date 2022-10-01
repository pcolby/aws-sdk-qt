// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHPLACEMENTRESPONSE_H
#define QTAWS_ASSOCIATEDEVICEWITHPLACEMENTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "associatedevicewithplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class AssociateDeviceWithPlacementResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT AssociateDeviceWithPlacementResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    AssociateDeviceWithPlacementResponse(const AssociateDeviceWithPlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDeviceWithPlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDeviceWithPlacementResponse)
    Q_DISABLE_COPY(AssociateDeviceWithPlacementResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
