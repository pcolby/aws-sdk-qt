// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDEVICESRESPONSE_H
#define QTAWS_DEREGISTERDEVICESRESPONSE_H

#include "sagemakerresponse.h"
#include "deregisterdevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class DeregisterDevicesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeregisterDevicesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeregisterDevicesResponse(const DeregisterDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterDevicesResponse)
    Q_DISABLE_COPY(DeregisterDevicesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
