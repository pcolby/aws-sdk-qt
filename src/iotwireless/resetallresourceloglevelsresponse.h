// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETALLRESOURCELOGLEVELSRESPONSE_H
#define QTAWS_RESETALLRESOURCELOGLEVELSRESPONSE_H

#include "iotwirelessresponse.h"
#include "resetallresourceloglevelsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ResetAllResourceLogLevelsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ResetAllResourceLogLevelsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ResetAllResourceLogLevelsResponse(const ResetAllResourceLogLevelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetAllResourceLogLevelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetAllResourceLogLevelsResponse)
    Q_DISABLE_COPY(ResetAllResourceLogLevelsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
