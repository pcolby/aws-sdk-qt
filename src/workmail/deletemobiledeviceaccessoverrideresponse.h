// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDERESPONSE_H
#define QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDERESPONSE_H

#include "workmailresponse.h"
#include "deletemobiledeviceaccessoverriderequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessOverrideResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteMobileDeviceAccessOverrideResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteMobileDeviceAccessOverrideResponse(const DeleteMobileDeviceAccessOverrideRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMobileDeviceAccessOverrideRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMobileDeviceAccessOverrideResponse)
    Q_DISABLE_COPY(DeleteMobileDeviceAccessOverrideResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
