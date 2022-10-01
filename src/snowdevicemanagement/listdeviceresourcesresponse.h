// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICERESOURCESRESPONSE_H
#define QTAWS_LISTDEVICERESOURCESRESPONSE_H

#include "snowdevicemanagementresponse.h"
#include "listdeviceresourcesrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class ListDeviceResourcesResponsePrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT ListDeviceResourcesResponse : public SnowDeviceManagementResponse {
    Q_OBJECT

public:
    ListDeviceResourcesResponse(const ListDeviceResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceResourcesResponse)
    Q_DISABLE_COPY(ListDeviceResourcesResponse)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
