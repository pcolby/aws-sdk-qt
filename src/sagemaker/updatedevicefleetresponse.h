// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEFLEETRESPONSE_H
#define QTAWS_UPDATEDEVICEFLEETRESPONSE_H

#include "sagemakerresponse.h"
#include "updatedevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateDeviceFleetResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateDeviceFleetResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateDeviceFleetResponse(const UpdateDeviceFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeviceFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceFleetResponse)
    Q_DISABLE_COPY(UpdateDeviceFleetResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
