// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPVALIDATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAPPVALIDATIONCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "deleteappvalidationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppValidationConfigurationResponsePrivate;

class QTAWSSMS_EXPORT DeleteAppValidationConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    DeleteAppValidationConfigurationResponse(const DeleteAppValidationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppValidationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppValidationConfigurationResponse)
    Q_DISABLE_COPY(DeleteAppValidationConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
