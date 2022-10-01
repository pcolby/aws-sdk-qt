// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDELEGATEDADMINACCOUNTRESPONSE_H
#define QTAWS_ENABLEDELEGATEDADMINACCOUNTRESPONSE_H

#include "inspector2response.h"
#include "enabledelegatedadminaccountrequest.h"

namespace QtAws {
namespace Inspector2 {

class EnableDelegatedAdminAccountResponsePrivate;

class QTAWSINSPECTOR2_EXPORT EnableDelegatedAdminAccountResponse : public Inspector2Response {
    Q_OBJECT

public:
    EnableDelegatedAdminAccountResponse(const EnableDelegatedAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableDelegatedAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDelegatedAdminAccountResponse)
    Q_DISABLE_COPY(EnableDelegatedAdminAccountResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
