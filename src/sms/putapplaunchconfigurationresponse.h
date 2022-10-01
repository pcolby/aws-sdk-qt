// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPLAUNCHCONFIGURATIONRESPONSE_H
#define QTAWS_PUTAPPLAUNCHCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "putapplaunchconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class PutAppLaunchConfigurationResponsePrivate;

class QTAWSSMS_EXPORT PutAppLaunchConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    PutAppLaunchConfigurationResponse(const PutAppLaunchConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAppLaunchConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppLaunchConfigurationResponse)
    Q_DISABLE_COPY(PutAppLaunchConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
