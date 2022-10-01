// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTPROPERTYVALUESREQUEST_P_H
#define QTAWS_BATCHPUTPROPERTYVALUESREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "batchputpropertyvaluesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class BatchPutPropertyValuesRequest;

class BatchPutPropertyValuesRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    BatchPutPropertyValuesRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   BatchPutPropertyValuesRequest * const q);
    BatchPutPropertyValuesRequestPrivate(const BatchPutPropertyValuesRequestPrivate &other,
                                   BatchPutPropertyValuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchPutPropertyValuesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
