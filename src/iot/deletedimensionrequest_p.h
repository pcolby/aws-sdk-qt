// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIMENSIONREQUEST_P_H
#define QTAWS_DELETEDIMENSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deletedimensionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteDimensionRequest;

class DeleteDimensionRequestPrivate : public IoTRequestPrivate {

public:
    DeleteDimensionRequestPrivate(const IoTRequest::Action action,
                                   DeleteDimensionRequest * const q);
    DeleteDimensionRequestPrivate(const DeleteDimensionRequestPrivate &other,
                                   DeleteDimensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
