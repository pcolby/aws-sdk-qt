// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOTAUPDATEREQUEST_P_H
#define QTAWS_DELETEOTAUPDATEREQUEST_P_H

#include "iotrequest_p.h"
#include "deleteotaupdaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteOTAUpdateRequest;

class DeleteOTAUpdateRequestPrivate : public IoTRequestPrivate {

public:
    DeleteOTAUpdateRequestPrivate(const IoTRequest::Action action,
                                   DeleteOTAUpdateRequest * const q);
    DeleteOTAUpdateRequestPrivate(const DeleteOTAUpdateRequestPrivate &other,
                                   DeleteOTAUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOTAUpdateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
