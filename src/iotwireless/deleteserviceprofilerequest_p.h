// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEPROFILEREQUEST_P_H
#define QTAWS_DELETESERVICEPROFILEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deleteserviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteServiceProfileRequest;

class DeleteServiceProfileRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteServiceProfileRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteServiceProfileRequest * const q);
    DeleteServiceProfileRequestPrivate(const DeleteServiceProfileRequestPrivate &other,
                                   DeleteServiceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
