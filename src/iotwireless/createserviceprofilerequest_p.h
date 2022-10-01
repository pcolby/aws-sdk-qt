// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEPROFILEREQUEST_P_H
#define QTAWS_CREATESERVICEPROFILEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createserviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateServiceProfileRequest;

class CreateServiceProfileRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateServiceProfileRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateServiceProfileRequest * const q);
    CreateServiceProfileRequestPrivate(const CreateServiceProfileRequestPrivate &other,
                                   CreateServiceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
