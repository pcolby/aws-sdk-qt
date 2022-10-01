// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTREQUEST_H
#define QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisassociateFromAdministratorAccountRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DisassociateFromAdministratorAccountRequest : public SecurityHubRequest {

public:
    DisassociateFromAdministratorAccountRequest(const DisassociateFromAdministratorAccountRequest &other);
    DisassociateFromAdministratorAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFromAdministratorAccountRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
