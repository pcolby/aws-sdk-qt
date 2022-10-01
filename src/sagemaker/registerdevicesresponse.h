// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEVICESRESPONSE_H
#define QTAWS_REGISTERDEVICESRESPONSE_H

#include "sagemakerresponse.h"
#include "registerdevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class RegisterDevicesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT RegisterDevicesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    RegisterDevicesResponse(const RegisterDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDevicesResponse)
    Q_DISABLE_COPY(RegisterDevicesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
