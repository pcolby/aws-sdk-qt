// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSSANDBOXACCOUNTSTATUSRESPONSE_H
#define QTAWS_GETSMSSANDBOXACCOUNTSTATUSRESPONSE_H

#include "snsresponse.h"
#include "getsmssandboxaccountstatusrequest.h"

namespace QtAws {
namespace Sns {

class GetSMSSandboxAccountStatusResponsePrivate;

class QTAWSSNS_EXPORT GetSMSSandboxAccountStatusResponse : public SnsResponse {
    Q_OBJECT

public:
    GetSMSSandboxAccountStatusResponse(const GetSMSSandboxAccountStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSMSSandboxAccountStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSMSSandboxAccountStatusResponse)
    Q_DISABLE_COPY(GetSMSSandboxAccountStatusResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
