// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCELOGLEVELRESPONSE_H
#define QTAWS_PUTRESOURCELOGLEVELRESPONSE_H

#include "iotwirelessresponse.h"
#include "putresourceloglevelrequest.h"

namespace QtAws {
namespace IoTWireless {

class PutResourceLogLevelResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT PutResourceLogLevelResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    PutResourceLogLevelResponse(const PutResourceLogLevelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutResourceLogLevelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourceLogLevelResponse)
    Q_DISABLE_COPY(PutResourceLogLevelResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
