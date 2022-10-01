// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIMENSIONREQUEST_P_H
#define QTAWS_CREATEDIMENSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "createdimensionrequest.h"

namespace QtAws {
namespace IoT {

class CreateDimensionRequest;

class CreateDimensionRequestPrivate : public IoTRequestPrivate {

public:
    CreateDimensionRequestPrivate(const IoTRequest::Action action,
                                   CreateDimensionRequest * const q);
    CreateDimensionRequestPrivate(const CreateDimensionRequestPrivate &other,
                                   CreateDimensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
