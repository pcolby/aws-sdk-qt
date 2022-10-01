// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTAUTHORIZERRESPONSE_H
#define QTAWS_SETDEFAULTAUTHORIZERRESPONSE_H

#include "iotresponse.h"
#include "setdefaultauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class SetDefaultAuthorizerResponsePrivate;

class QTAWSIOT_EXPORT SetDefaultAuthorizerResponse : public IoTResponse {
    Q_OBJECT

public:
    SetDefaultAuthorizerResponse(const SetDefaultAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetDefaultAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultAuthorizerResponse)
    Q_DISABLE_COPY(SetDefaultAuthorizerResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
