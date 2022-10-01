// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPROFILESREQUEST_H
#define QTAWS_LISTDEVICEPROFILESREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListDeviceProfilesRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListDeviceProfilesRequest : public IoTWirelessRequest {

public:
    ListDeviceProfilesRequest(const ListDeviceProfilesRequest &other);
    ListDeviceProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceProfilesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
