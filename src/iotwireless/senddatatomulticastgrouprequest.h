// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOMULTICASTGROUPREQUEST_H
#define QTAWS_SENDDATATOMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT SendDataToMulticastGroupRequest : public IoTWirelessRequest {

public:
    SendDataToMulticastGroupRequest(const SendDataToMulticastGroupRequest &other);
    SendDataToMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendDataToMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
