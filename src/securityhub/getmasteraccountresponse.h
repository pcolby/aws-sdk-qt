// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMASTERACCOUNTRESPONSE_H
#define QTAWS_GETMASTERACCOUNTRESPONSE_H

#include "securityhubresponse.h"
#include "getmasteraccountrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetMasterAccountResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetMasterAccountResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetMasterAccountResponse(const GetMasterAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMasterAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMasterAccountResponse)
    Q_DISABLE_COPY(GetMasterAccountResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
