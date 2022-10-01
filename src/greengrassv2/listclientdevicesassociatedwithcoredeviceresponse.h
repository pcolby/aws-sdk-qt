// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICERESPONSE_H
#define QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICERESPONSE_H

#include "greengrassv2response.h"
#include "listclientdevicesassociatedwithcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListClientDevicesAssociatedWithCoreDeviceResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT ListClientDevicesAssociatedWithCoreDeviceResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    ListClientDevicesAssociatedWithCoreDeviceResponse(const ListClientDevicesAssociatedWithCoreDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClientDevicesAssociatedWithCoreDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClientDevicesAssociatedWithCoreDeviceResponse)
    Q_DISABLE_COPY(ListClientDevicesAssociatedWithCoreDeviceResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
