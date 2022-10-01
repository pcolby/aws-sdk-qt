// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICERESPONSE_H
#define QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICERESPONSE_H

#include "greengrassv2response.h"
#include "batchdisassociateclientdevicefromcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchDisassociateClientDeviceFromCoreDeviceResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT BatchDisassociateClientDeviceFromCoreDeviceResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    BatchDisassociateClientDeviceFromCoreDeviceResponse(const BatchDisassociateClientDeviceFromCoreDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateClientDeviceFromCoreDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateClientDeviceFromCoreDeviceResponse)
    Q_DISABLE_COPY(BatchDisassociateClientDeviceFromCoreDeviceResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
