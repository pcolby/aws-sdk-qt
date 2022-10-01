// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTRESPONSE_H
#define QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "disassociatedevicefromplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DisassociateDeviceFromPlacementResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DisassociateDeviceFromPlacementResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    DisassociateDeviceFromPlacementResponse(const DisassociateDeviceFromPlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateDeviceFromPlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDeviceFromPlacementResponse)
    Q_DISABLE_COPY(DisassociateDeviceFromPlacementResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
