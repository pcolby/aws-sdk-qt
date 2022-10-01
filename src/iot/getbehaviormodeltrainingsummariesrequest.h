// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBEHAVIORMODELTRAININGSUMMARIESREQUEST_H
#define QTAWS_GETBEHAVIORMODELTRAININGSUMMARIESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetBehaviorModelTrainingSummariesRequestPrivate;

class QTAWSIOT_EXPORT GetBehaviorModelTrainingSummariesRequest : public IoTRequest {

public:
    GetBehaviorModelTrainingSummariesRequest(const GetBehaviorModelTrainingSummariesRequest &other);
    GetBehaviorModelTrainingSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBehaviorModelTrainingSummariesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
