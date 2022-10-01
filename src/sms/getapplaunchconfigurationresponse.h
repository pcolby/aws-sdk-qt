// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLAUNCHCONFIGURATIONRESPONSE_H
#define QTAWS_GETAPPLAUNCHCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "getapplaunchconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class GetAppLaunchConfigurationResponsePrivate;

class QTAWSSMS_EXPORT GetAppLaunchConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    GetAppLaunchConfigurationResponse(const GetAppLaunchConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppLaunchConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppLaunchConfigurationResponse)
    Q_DISABLE_COPY(GetAppLaunchConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
