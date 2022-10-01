// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_H
#define QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DisassociateServiceRoleFromAccountRequestPrivate;

class QTAWSGREENGRASS_EXPORT DisassociateServiceRoleFromAccountRequest : public GreengrassRequest {

public:
    DisassociateServiceRoleFromAccountRequest(const DisassociateServiceRoleFromAccountRequest &other);
    DisassociateServiceRoleFromAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateServiceRoleFromAccountRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
