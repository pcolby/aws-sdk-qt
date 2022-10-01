// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSENDINGENABLEDRESPONSE_H
#define QTAWS_GETACCOUNTSENDINGENABLEDRESPONSE_H

#include "sesresponse.h"
#include "getaccountsendingenabledrequest.h"

namespace QtAws {
namespace Ses {

class GetAccountSendingEnabledResponsePrivate;

class QTAWSSES_EXPORT GetAccountSendingEnabledResponse : public SesResponse {
    Q_OBJECT

public:
    GetAccountSendingEnabledResponse(const GetAccountSendingEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountSendingEnabledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountSendingEnabledResponse)
    Q_DISABLE_COPY(GetAccountSendingEnabledResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
