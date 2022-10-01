// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATEMEMBERACCOUNTRESPONSE_H

#include "macieresponse.h"
#include "disassociatememberaccountrequest.h"

namespace QtAws {
namespace Macie {

class DisassociateMemberAccountResponsePrivate;

class QTAWSMACIE_EXPORT DisassociateMemberAccountResponse : public MacieResponse {
    Q_OBJECT

public:
    DisassociateMemberAccountResponse(const DisassociateMemberAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateMemberAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMemberAccountResponse)
    Q_DISABLE_COPY(DisassociateMemberAccountResponse)

};

} // namespace Macie
} // namespace QtAws

#endif
