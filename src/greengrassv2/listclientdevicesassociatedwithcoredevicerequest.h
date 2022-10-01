// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICEREQUEST_H
#define QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICEREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class ListClientDevicesAssociatedWithCoreDeviceRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT ListClientDevicesAssociatedWithCoreDeviceRequest : public GreengrassV2Request {

public:
    ListClientDevicesAssociatedWithCoreDeviceRequest(const ListClientDevicesAssociatedWithCoreDeviceRequest &other);
    ListClientDevicesAssociatedWithCoreDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClientDevicesAssociatedWithCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
