// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSDEVICESREQUEST_H
#define QTAWS_LISTWIRELESSDEVICESREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessDevicesRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListWirelessDevicesRequest : public IoTWirelessRequest {

public:
    ListWirelessDevicesRequest(const ListWirelessDevicesRequest &other);
    ListWirelessDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWirelessDevicesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
