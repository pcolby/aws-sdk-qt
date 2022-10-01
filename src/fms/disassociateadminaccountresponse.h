// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEADMINACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATEADMINACCOUNTRESPONSE_H

#include "fmsresponse.h"
#include "disassociateadminaccountrequest.h"

namespace QtAws {
namespace Fms {

class DisassociateAdminAccountResponsePrivate;

class QTAWSFMS_EXPORT DisassociateAdminAccountResponse : public FmsResponse {
    Q_OBJECT

public:
    DisassociateAdminAccountResponse(const DisassociateAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAdminAccountResponse)
    Q_DISABLE_COPY(DisassociateAdminAccountResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
