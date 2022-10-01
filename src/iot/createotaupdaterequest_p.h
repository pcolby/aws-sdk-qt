// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOTAUPDATEREQUEST_P_H
#define QTAWS_CREATEOTAUPDATEREQUEST_P_H

#include "iotrequest_p.h"
#include "createotaupdaterequest.h"

namespace QtAws {
namespace IoT {

class CreateOTAUpdateRequest;

class CreateOTAUpdateRequestPrivate : public IoTRequestPrivate {

public:
    CreateOTAUpdateRequestPrivate(const IoTRequest::Action action,
                                   CreateOTAUpdateRequest * const q);
    CreateOTAUpdateRequestPrivate(const CreateOTAUpdateRequestPrivate &other,
                                   CreateOTAUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOTAUpdateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
