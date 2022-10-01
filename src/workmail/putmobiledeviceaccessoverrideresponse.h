// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMOBILEDEVICEACCESSOVERRIDERESPONSE_H
#define QTAWS_PUTMOBILEDEVICEACCESSOVERRIDERESPONSE_H

#include "workmailresponse.h"
#include "putmobiledeviceaccessoverriderequest.h"

namespace QtAws {
namespace WorkMail {

class PutMobileDeviceAccessOverrideResponsePrivate;

class QTAWSWORKMAIL_EXPORT PutMobileDeviceAccessOverrideResponse : public WorkMailResponse {
    Q_OBJECT

public:
    PutMobileDeviceAccessOverrideResponse(const PutMobileDeviceAccessOverrideRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMobileDeviceAccessOverrideRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMobileDeviceAccessOverrideResponse)
    Q_DISABLE_COPY(PutMobileDeviceAccessOverrideResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
