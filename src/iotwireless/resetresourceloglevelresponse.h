// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETRESOURCELOGLEVELRESPONSE_H
#define QTAWS_RESETRESOURCELOGLEVELRESPONSE_H

#include "iotwirelessresponse.h"
#include "resetresourceloglevelrequest.h"

namespace QtAws {
namespace IoTWireless {

class ResetResourceLogLevelResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ResetResourceLogLevelResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ResetResourceLogLevelResponse(const ResetResourceLogLevelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetResourceLogLevelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetResourceLogLevelResponse)
    Q_DISABLE_COPY(ResetResourceLogLevelResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
