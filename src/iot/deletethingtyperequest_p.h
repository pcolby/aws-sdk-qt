// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGTYPEREQUEST_P_H
#define QTAWS_DELETETHINGTYPEREQUEST_P_H

#include "iotrequest_p.h"
#include "deletethingtyperequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingTypeRequest;

class DeleteThingTypeRequestPrivate : public IoTRequestPrivate {

public:
    DeleteThingTypeRequestPrivate(const IoTRequest::Action action,
                                   DeleteThingTypeRequest * const q);
    DeleteThingTypeRequestPrivate(const DeleteThingTypeRequestPrivate &other,
                                   DeleteThingTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
