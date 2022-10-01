// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSOVERRIDEREQUEST_H
#define QTAWS_GETMOBILEDEVICEACCESSOVERRIDEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessOverrideRequestPrivate;

class QTAWSWORKMAIL_EXPORT GetMobileDeviceAccessOverrideRequest : public WorkMailRequest {

public:
    GetMobileDeviceAccessOverrideRequest(const GetMobileDeviceAccessOverrideRequest &other);
    GetMobileDeviceAccessOverrideRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMobileDeviceAccessOverrideRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
