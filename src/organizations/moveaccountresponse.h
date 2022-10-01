// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEACCOUNTRESPONSE_H
#define QTAWS_MOVEACCOUNTRESPONSE_H

#include "organizationsresponse.h"
#include "moveaccountrequest.h"

namespace QtAws {
namespace Organizations {

class MoveAccountResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT MoveAccountResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    MoveAccountResponse(const MoveAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MoveAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveAccountResponse)
    Q_DISABLE_COPY(MoveAccountResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
