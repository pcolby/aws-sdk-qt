// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEINSTANCESREQUEST_H
#define QTAWS_LISTDEVICEINSTANCESREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListDeviceInstancesRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListDeviceInstancesRequest : public DeviceFarmRequest {

public:
    ListDeviceInstancesRequest(const ListDeviceInstancesRequest &other);
    ListDeviceInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceInstancesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
