// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCELOGLEVELRESPONSE_H
#define QTAWS_GETRESOURCELOGLEVELRESPONSE_H

#include "iotwirelessresponse.h"
#include "getresourceloglevelrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceLogLevelResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetResourceLogLevelResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetResourceLogLevelResponse(const GetResourceLogLevelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceLogLevelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceLogLevelResponse)
    Q_DISABLE_COPY(GetResourceLogLevelResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
