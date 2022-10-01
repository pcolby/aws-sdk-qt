// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTRESPONSE_H

#include "greengrassv2response.h"
#include "disassociateservicerolefromaccountrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class DisassociateServiceRoleFromAccountResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT DisassociateServiceRoleFromAccountResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    DisassociateServiceRoleFromAccountResponse(const DisassociateServiceRoleFromAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateServiceRoleFromAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateServiceRoleFromAccountResponse)
    Q_DISABLE_COPY(DisassociateServiceRoleFromAccountResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
