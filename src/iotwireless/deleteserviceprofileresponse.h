// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEPROFILERESPONSE_H
#define QTAWS_DELETESERVICEPROFILERESPONSE_H

#include "iotwirelessresponse.h"
#include "deleteserviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteServiceProfileResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteServiceProfileResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteServiceProfileResponse(const DeleteServiceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceProfileResponse)
    Q_DISABLE_COPY(DeleteServiceProfileResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
