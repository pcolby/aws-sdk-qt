// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESRESPONSE_H
#define QTAWS_UPDATEDEVICESRESPONSE_H

#include "sagemakerresponse.h"
#include "updatedevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateDevicesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateDevicesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateDevicesResponse(const UpdateDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevicesResponse)
    Q_DISABLE_COPY(UpdateDevicesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
