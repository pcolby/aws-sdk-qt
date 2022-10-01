// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEVICERESPONSE_H
#define QTAWS_GETCOREDEVICERESPONSE_H

#include "greengrassv2response.h"
#include "getcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetCoreDeviceResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT GetCoreDeviceResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    GetCoreDeviceResponse(const GetCoreDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoreDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreDeviceResponse)
    Q_DISABLE_COPY(GetCoreDeviceResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
