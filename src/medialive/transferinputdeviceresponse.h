// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERINPUTDEVICERESPONSE_H
#define QTAWS_TRANSFERINPUTDEVICERESPONSE_H

#include "medialiveresponse.h"
#include "transferinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class TransferInputDeviceResponsePrivate;

class QTAWSMEDIALIVE_EXPORT TransferInputDeviceResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    TransferInputDeviceResponse(const TransferInputDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransferInputDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferInputDeviceResponse)
    Q_DISABLE_COPY(TransferInputDeviceResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
