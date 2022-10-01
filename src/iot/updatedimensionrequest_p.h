// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIMENSIONREQUEST_P_H
#define QTAWS_UPDATEDIMENSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "updatedimensionrequest.h"

namespace QtAws {
namespace IoT {

class UpdateDimensionRequest;

class UpdateDimensionRequestPrivate : public IoTRequestPrivate {

public:
    UpdateDimensionRequestPrivate(const IoTRequest::Action action,
                                   UpdateDimensionRequest * const q);
    UpdateDimensionRequestPrivate(const UpdateDimensionRequestPrivate &other,
                                   UpdateDimensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
