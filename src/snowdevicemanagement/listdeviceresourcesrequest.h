// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICERESOURCESREQUEST_H
#define QTAWS_LISTDEVICERESOURCESREQUEST_H

#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class ListDeviceResourcesRequestPrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT ListDeviceResourcesRequest : public SnowDeviceManagementRequest {

public:
    ListDeviceResourcesRequest(const ListDeviceResourcesRequest &other);
    ListDeviceResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceResourcesRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
