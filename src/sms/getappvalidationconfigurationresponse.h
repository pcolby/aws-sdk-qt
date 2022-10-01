// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETAPPVALIDATIONCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "getappvalidationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class GetAppValidationConfigurationResponsePrivate;

class QTAWSSMS_EXPORT GetAppValidationConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    GetAppValidationConfigurationResponse(const GetAppValidationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppValidationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppValidationConfigurationResponse)
    Q_DISABLE_COPY(GetAppValidationConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
