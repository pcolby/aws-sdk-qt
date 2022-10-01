// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMOBILEDEVICEACCESSOVERRIDEREQUEST_H
#define QTAWS_PUTMOBILEDEVICEACCESSOVERRIDEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class PutMobileDeviceAccessOverrideRequestPrivate;

class QTAWSWORKMAIL_EXPORT PutMobileDeviceAccessOverrideRequest : public WorkMailRequest {

public:
    PutMobileDeviceAccessOverrideRequest(const PutMobileDeviceAccessOverrideRequest &other);
    PutMobileDeviceAccessOverrideRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMobileDeviceAccessOverrideRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
