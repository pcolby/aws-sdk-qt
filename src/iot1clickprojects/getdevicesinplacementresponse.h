// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICESINPLACEMENTRESPONSE_H
#define QTAWS_GETDEVICESINPLACEMENTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "getdevicesinplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class GetDevicesInPlacementResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT GetDevicesInPlacementResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    GetDevicesInPlacementResponse(const GetDevicesInPlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevicesInPlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicesInPlacementResponse)
    Q_DISABLE_COPY(GetDevicesInPlacementResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
