// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARDEFAULTAUTHORIZERRESPONSE_H
#define QTAWS_CLEARDEFAULTAUTHORIZERRESPONSE_H

#include "iotresponse.h"
#include "cleardefaultauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class ClearDefaultAuthorizerResponsePrivate;

class QTAWSIOT_EXPORT ClearDefaultAuthorizerResponse : public IoTResponse {
    Q_OBJECT

public:
    ClearDefaultAuthorizerResponse(const ClearDefaultAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ClearDefaultAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClearDefaultAuthorizerResponse)
    Q_DISABLE_COPY(ClearDefaultAuthorizerResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
