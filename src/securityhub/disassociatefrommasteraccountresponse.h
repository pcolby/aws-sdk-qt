// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_H

#include "securityhubresponse.h"
#include "disassociatefrommasteraccountrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisassociateFromMasterAccountResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DisassociateFromMasterAccountResponse : public SecurityHubResponse {
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

} // namespace SecurityHub
} // namespace QtAws

#endif
