// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBEHAVIORMODELTRAININGSUMMARIESRESPONSE_H
#define QTAWS_GETBEHAVIORMODELTRAININGSUMMARIESRESPONSE_H

#include "iotresponse.h"
#include "getbehaviormodeltrainingsummariesrequest.h"

namespace QtAws {
namespace IoT {

class GetBehaviorModelTrainingSummariesResponsePrivate;

class QTAWSIOT_EXPORT GetBehaviorModelTrainingSummariesResponse : public IoTResponse {
    Q_OBJECT

public:
    GetBehaviorModelTrainingSummariesResponse(const GetBehaviorModelTrainingSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBehaviorModelTrainingSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBehaviorModelTrainingSummariesResponse)
    Q_DISABLE_COPY(GetBehaviorModelTrainingSummariesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
