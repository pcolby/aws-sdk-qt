// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICERESPONSE_H
#define QTAWS_DESCRIBEINPUTDEVICERESPONSE_H

#include "medialiveresponse.h"
#include "describeinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputDeviceResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeInputDeviceResponse(const DescribeInputDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInputDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputDeviceResponse)
    Q_DISABLE_COPY(DescribeInputDeviceResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
