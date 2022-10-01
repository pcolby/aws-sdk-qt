// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEFLEETRESPONSE_H
#define QTAWS_CREATEDEVICEFLEETRESPONSE_H

#include "sagemakerresponse.h"
#include "createdevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateDeviceFleetResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateDeviceFleetResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateDeviceFleetResponse(const CreateDeviceFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeviceFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceFleetResponse)
    Q_DISABLE_COPY(CreateDeviceFleetResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
