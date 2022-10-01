// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDELEGATEDADMINACCOUNTRESPONSE_H
#define QTAWS_DISABLEDELEGATEDADMINACCOUNTRESPONSE_H

#include "inspector2response.h"
#include "disabledelegatedadminaccountrequest.h"

namespace QtAws {
namespace Inspector2 {

class DisableDelegatedAdminAccountResponsePrivate;

class QTAWSINSPECTOR2_EXPORT DisableDelegatedAdminAccountResponse : public Inspector2Response {
    Q_OBJECT

public:
    DisableDelegatedAdminAccountResponse(const DisableDelegatedAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableDelegatedAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableDelegatedAdminAccountResponse)
    Q_DISABLE_COPY(DisableDelegatedAdminAccountResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
