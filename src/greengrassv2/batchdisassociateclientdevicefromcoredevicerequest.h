// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICEREQUEST_H
#define QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICEREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchDisassociateClientDeviceFromCoreDeviceRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT BatchDisassociateClientDeviceFromCoreDeviceRequest : public GreengrassV2Request {

public:
    BatchDisassociateClientDeviceFromCoreDeviceRequest(const BatchDisassociateClientDeviceFromCoreDeviceRequest &other);
    BatchDisassociateClientDeviceFromCoreDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateClientDeviceFromCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
