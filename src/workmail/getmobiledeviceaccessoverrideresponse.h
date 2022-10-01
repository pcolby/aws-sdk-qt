// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSOVERRIDERESPONSE_H
#define QTAWS_GETMOBILEDEVICEACCESSOVERRIDERESPONSE_H

#include "workmailresponse.h"
#include "getmobiledeviceaccessoverriderequest.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessOverrideResponsePrivate;

class QTAWSWORKMAIL_EXPORT GetMobileDeviceAccessOverrideResponse : public WorkMailResponse {
    Q_OBJECT

public:
    GetMobileDeviceAccessOverrideResponse(const GetMobileDeviceAccessOverrideRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMobileDeviceAccessOverrideRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMobileDeviceAccessOverrideResponse)
    Q_DISABLE_COPY(GetMobileDeviceAccessOverrideResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
