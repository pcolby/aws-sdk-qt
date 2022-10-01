// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICERESPONSE_H
#define QTAWS_UPDATEDEVICERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updatedevicerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateDeviceResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateDeviceResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateDeviceResponse(const UpdateDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceResponse)
    Q_DISABLE_COPY(UpdateDeviceResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
