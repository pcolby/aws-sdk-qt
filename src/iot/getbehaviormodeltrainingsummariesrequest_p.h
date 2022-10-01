// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBEHAVIORMODELTRAININGSUMMARIESREQUEST_P_H
#define QTAWS_GETBEHAVIORMODELTRAININGSUMMARIESREQUEST_P_H

#include "iotrequest_p.h"
#include "getbehaviormodeltrainingsummariesrequest.h"

namespace QtAws {
namespace IoT {

class GetBehaviorModelTrainingSummariesRequest;

class GetBehaviorModelTrainingSummariesRequestPrivate : public IoTRequestPrivate {

public:
    GetBehaviorModelTrainingSummariesRequestPrivate(const IoTRequest::Action action,
                                   GetBehaviorModelTrainingSummariesRequest * const q);
    GetBehaviorModelTrainingSummariesRequestPrivate(const GetBehaviorModelTrainingSummariesRequestPrivate &other,
                                   GetBehaviorModelTrainingSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBehaviorModelTrainingSummariesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
