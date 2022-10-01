// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPLAUNCHCONFIGURATIONREQUEST_H
#define QTAWS_PUTAPPLAUNCHCONFIGURATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class PutAppLaunchConfigurationRequestPrivate;

class QTAWSSMS_EXPORT PutAppLaunchConfigurationRequest : public SmsRequest {

public:
    PutAppLaunchConfigurationRequest(const PutAppLaunchConfigurationRequest &other);
    PutAppLaunchConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppLaunchConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
