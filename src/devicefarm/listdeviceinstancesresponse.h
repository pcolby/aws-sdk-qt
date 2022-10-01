// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEINSTANCESRESPONSE_H
#define QTAWS_LISTDEVICEINSTANCESRESPONSE_H

#include "devicefarmresponse.h"
#include "listdeviceinstancesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListDeviceInstancesResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListDeviceInstancesResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListDeviceInstancesResponse(const ListDeviceInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceInstancesResponse)
    Q_DISABLE_COPY(ListDeviceInstancesResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
