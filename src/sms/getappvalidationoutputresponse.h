// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONOUTPUTRESPONSE_H
#define QTAWS_GETAPPVALIDATIONOUTPUTRESPONSE_H

#include "smsresponse.h"
#include "getappvalidationoutputrequest.h"

namespace QtAws {
namespace Sms {

class GetAppValidationOutputResponsePrivate;

class QTAWSSMS_EXPORT GetAppValidationOutputResponse : public SmsResponse {
    Q_OBJECT

public:
    GetAppValidationOutputResponse(const GetAppValidationOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppValidationOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppValidationOutputResponse)
    Q_DISABLE_COPY(GetAppValidationOutputResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
