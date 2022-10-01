// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTICASTGROUPREQUEST_H
#define QTAWS_UPDATEMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateMulticastGroupRequest : public IoTWirelessRequest {

public:
    UpdateMulticastGroupRequest(const UpdateMulticastGroupRequest &other);
    UpdateMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
