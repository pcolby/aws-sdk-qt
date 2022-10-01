// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONREQUEST_P_H
#define QTAWS_DESCRIBEDIMENSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "describedimensionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDimensionRequest;

class DescribeDimensionRequestPrivate : public IoTRequestPrivate {

public:
    DescribeDimensionRequestPrivate(const IoTRequest::Action action,
                                   DescribeDimensionRequest * const q);
    DescribeDimensionRequestPrivate(const DescribeDimensionRequestPrivate &other,
                                   DescribeDimensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
