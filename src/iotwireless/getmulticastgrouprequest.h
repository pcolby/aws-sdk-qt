// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPREQUEST_H
#define QTAWS_GETMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetMulticastGroupRequest : public IoTWirelessRequest {

public:
    GetMulticastGroupRequest(const GetMulticastGroupRequest &other);
    GetMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
