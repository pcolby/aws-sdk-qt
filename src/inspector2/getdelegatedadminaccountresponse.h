// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATEDADMINACCOUNTRESPONSE_H
#define QTAWS_GETDELEGATEDADMINACCOUNTRESPONSE_H

#include "inspector2response.h"
#include "getdelegatedadminaccountrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetDelegatedAdminAccountResponsePrivate;

class QTAWSINSPECTOR2_EXPORT GetDelegatedAdminAccountResponse : public Inspector2Response {
    Q_OBJECT

public:
    GetDelegatedAdminAccountResponse(const GetDelegatedAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDelegatedAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDelegatedAdminAccountResponse)
    Q_DISABLE_COPY(GetDelegatedAdminAccountResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
