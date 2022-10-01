// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGLEVELRESPONSE_H
#define QTAWS_SETV2LOGGINGLEVELRESPONSE_H

#include "iotresponse.h"
#include "setv2logginglevelrequest.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingLevelResponsePrivate;

class QTAWSIOT_EXPORT SetV2LoggingLevelResponse : public IoTResponse {
    Q_OBJECT

public:
    SetV2LoggingLevelResponse(const SetV2LoggingLevelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetV2LoggingLevelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetV2LoggingLevelResponse)
    Q_DISABLE_COPY(SetV2LoggingLevelResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
