// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINPUTDEVICERESPONSE_H
#define QTAWS_REBOOTINPUTDEVICERESPONSE_H

#include "medialiveresponse.h"
#include "rebootinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class RebootInputDeviceResponsePrivate;

class QTAWSMEDIALIVE_EXPORT RebootInputDeviceResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    RebootInputDeviceResponse(const RebootInputDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootInputDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootInputDeviceResponse)
    Q_DISABLE_COPY(RebootInputDeviceResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
