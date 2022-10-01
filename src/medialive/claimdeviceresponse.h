// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMDEVICERESPONSE_H
#define QTAWS_CLAIMDEVICERESPONSE_H

#include "medialiveresponse.h"
#include "claimdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class ClaimDeviceResponsePrivate;

class QTAWSMEDIALIVE_EXPORT ClaimDeviceResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    ClaimDeviceResponse(const ClaimDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ClaimDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClaimDeviceResponse)
    Q_DISABLE_COPY(ClaimDeviceResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
