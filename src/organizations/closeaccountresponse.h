// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEACCOUNTRESPONSE_H
#define QTAWS_CLOSEACCOUNTRESPONSE_H

#include "organizationsresponse.h"
#include "closeaccountrequest.h"

namespace QtAws {
namespace Organizations {

class CloseAccountResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT CloseAccountResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    CloseAccountResponse(const CloseAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CloseAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloseAccountResponse)
    Q_DISABLE_COPY(CloseAccountResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
