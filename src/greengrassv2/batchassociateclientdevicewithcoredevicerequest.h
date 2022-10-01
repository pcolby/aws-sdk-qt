// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICEREQUEST_H
#define QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICEREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchAssociateClientDeviceWithCoreDeviceRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT BatchAssociateClientDeviceWithCoreDeviceRequest : public GreengrassV2Request {

public:
    BatchAssociateClientDeviceWithCoreDeviceRequest(const BatchAssociateClientDeviceWithCoreDeviceRequest &other);
    BatchAssociateClientDeviceWithCoreDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateClientDeviceWithCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
