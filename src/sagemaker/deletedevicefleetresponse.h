// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEFLEETRESPONSE_H
#define QTAWS_DELETEDEVICEFLEETRESPONSE_H

#include "sagemakerresponse.h"
#include "deletedevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteDeviceFleetResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteDeviceFleetResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteDeviceFleetResponse(const DeleteDeviceFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeviceFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceFleetResponse)
    Q_DISABLE_COPY(DeleteDeviceFleetResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
