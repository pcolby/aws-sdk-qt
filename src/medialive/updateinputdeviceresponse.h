// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTDEVICERESPONSE_H
#define QTAWS_UPDATEINPUTDEVICERESPONSE_H

#include "medialiveresponse.h"
#include "updateinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputDeviceResponsePrivate;

class QTAWSMEDIALIVE_EXPORT UpdateInputDeviceResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    UpdateInputDeviceResponse(const UpdateInputDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInputDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInputDeviceResponse)
    Q_DISABLE_COPY(UpdateInputDeviceResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
