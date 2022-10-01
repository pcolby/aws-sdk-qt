// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHORIZERRESPONSE_H
#define QTAWS_CREATEAUTHORIZERRESPONSE_H

#include "iotresponse.h"
#include "createauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class CreateAuthorizerResponsePrivate;

class QTAWSIOT_EXPORT CreateAuthorizerResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateAuthorizerResponse(const CreateAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAuthorizerResponse)
    Q_DISABLE_COPY(CreateAuthorizerResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
