// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGREQUEST_P_H
#define QTAWS_DELETETHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "deletethingrequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingRequest;

class DeleteThingRequestPrivate : public IoTRequestPrivate {

public:
    DeleteThingRequestPrivate(const IoTRequest::Action action,
                                   DeleteThingRequest * const q);
    DeleteThingRequestPrivate(const DeleteThingRequestPrivate &other,
                                   DeleteThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
