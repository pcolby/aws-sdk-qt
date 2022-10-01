// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOTAUPDATEREQUEST_P_H
#define QTAWS_GETOTAUPDATEREQUEST_P_H

#include "iotrequest_p.h"
#include "getotaupdaterequest.h"

namespace QtAws {
namespace IoT {

class GetOTAUpdateRequest;

class GetOTAUpdateRequestPrivate : public IoTRequestPrivate {

public:
    GetOTAUpdateRequestPrivate(const IoTRequest::Action action,
                                   GetOTAUpdateRequest * const q);
    GetOTAUpdateRequestPrivate(const GetOTAUpdateRequestPrivate &other,
                                   GetOTAUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOTAUpdateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
