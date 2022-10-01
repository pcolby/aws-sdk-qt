// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSEFFECTRESPONSE_H
#define QTAWS_GETMOBILEDEVICEACCESSEFFECTRESPONSE_H

#include "workmailresponse.h"
#include "getmobiledeviceaccesseffectrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessEffectResponsePrivate;

class QTAWSWORKMAIL_EXPORT GetMobileDeviceAccessEffectResponse : public WorkMailResponse {
    Q_OBJECT

public:
    GetMobileDeviceAccessEffectResponse(const GetMobileDeviceAccessEffectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMobileDeviceAccessEffectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMobileDeviceAccessEffectResponse)
    Q_DISABLE_COPY(GetMobileDeviceAccessEffectResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
