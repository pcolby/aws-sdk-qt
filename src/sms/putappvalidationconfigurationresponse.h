// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPVALIDATIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTAPPVALIDATIONCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "putappvalidationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class PutAppValidationConfigurationResponsePrivate;

class QTAWSSMS_EXPORT PutAppValidationConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    PutAppValidationConfigurationResponse(const PutAppValidationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAppValidationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppValidationConfigurationResponse)
    Q_DISABLE_COPY(PutAppValidationConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
