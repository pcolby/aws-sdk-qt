// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOREDEVICERESPONSE_H
#define QTAWS_DELETECOREDEVICERESPONSE_H

#include "greengrassv2response.h"
#include "deletecoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteCoreDeviceResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT DeleteCoreDeviceResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    DeleteCoreDeviceResponse(const DeleteCoreDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCoreDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreDeviceResponse)
    Q_DISABLE_COPY(DeleteCoreDeviceResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
