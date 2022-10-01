// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_H

#include "macie2response.h"
#include "disassociatefrommasteraccountrequest.h"

namespace QtAws {
namespace Macie2 {

class DisassociateFromMasterAccountResponsePrivate;

class QTAWSMACIE2_EXPORT DisassociateFromMasterAccountResponse : public Macie2Response {
    Q_OBJECT

public:
    DisassociateFromMasterAccountResponse(const DisassociateFromMasterAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateFromMasterAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFromMasterAccountResponse)
    Q_DISABLE_COPY(DisassociateFromMasterAccountResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
