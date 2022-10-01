// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICERESPONSE_H
#define QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICERESPONSE_H

#include "greengrassv2response.h"
#include "batchassociateclientdevicewithcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchAssociateClientDeviceWithCoreDeviceResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT BatchAssociateClientDeviceWithCoreDeviceResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    BatchAssociateClientDeviceWithCoreDeviceResponse(const BatchAssociateClientDeviceWithCoreDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateClientDeviceWithCoreDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateClientDeviceWithCoreDeviceResponse)
    Q_DISABLE_COPY(BatchAssociateClientDeviceWithCoreDeviceResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
