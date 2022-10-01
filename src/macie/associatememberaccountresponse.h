// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERACCOUNTRESPONSE_H
#define QTAWS_ASSOCIATEMEMBERACCOUNTRESPONSE_H

#include "macieresponse.h"
#include "associatememberaccountrequest.h"

namespace QtAws {
namespace Macie {

class AssociateMemberAccountResponsePrivate;

class QTAWSMACIE_EXPORT AssociateMemberAccountResponse : public MacieResponse {
    Q_OBJECT

public:
    AssociateMemberAccountResponse(const AssociateMemberAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateMemberAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMemberAccountResponse)
    Q_DISABLE_COPY(AssociateMemberAccountResponse)

};

} // namespace Macie
} // namespace QtAws

#endif
