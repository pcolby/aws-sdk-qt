// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLAUNCHCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAPPLAUNCHCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "deleteapplaunchconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppLaunchConfigurationResponsePrivate;

class QTAWSSMS_EXPORT DeleteAppLaunchConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    DeleteAppLaunchConfigurationResponse(const DeleteAppLaunchConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppLaunchConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppLaunchConfigurationResponse)
    Q_DISABLE_COPY(DeleteAppLaunchConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
