// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINACCOUNTRESPONSE_H
#define QTAWS_GETADMINACCOUNTRESPONSE_H

#include "fmsresponse.h"
#include "getadminaccountrequest.h"

namespace QtAws {
namespace Fms {

class GetAdminAccountResponsePrivate;

class QTAWSFMS_EXPORT GetAdminAccountResponse : public FmsResponse {
    Q_OBJECT

public:
    GetAdminAccountResponse(const GetAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAdminAccountResponse)
    Q_DISABLE_COPY(GetAdminAccountResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
