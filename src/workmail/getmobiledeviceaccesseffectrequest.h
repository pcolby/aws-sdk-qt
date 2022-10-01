// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSEFFECTREQUEST_H
#define QTAWS_GETMOBILEDEVICEACCESSEFFECTREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessEffectRequestPrivate;

class QTAWSWORKMAIL_EXPORT GetMobileDeviceAccessEffectRequest : public WorkMailRequest {

public:
    GetMobileDeviceAccessEffectRequest(const GetMobileDeviceAccessEffectRequest &other);
    GetMobileDeviceAccessEffectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMobileDeviceAccessEffectRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
