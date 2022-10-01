// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTICASTGROUPREQUEST_H
#define QTAWS_CREATEMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateMulticastGroupRequest : public IoTWirelessRequest {

public:
    CreateMulticastGroupRequest(const CreateMulticastGroupRequest &other);
    CreateMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
