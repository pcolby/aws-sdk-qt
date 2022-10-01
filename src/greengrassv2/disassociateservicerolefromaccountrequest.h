// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_H
#define QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class DisassociateServiceRoleFromAccountRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT DisassociateServiceRoleFromAccountRequest : public GreengrassV2Request {

public:
    DisassociateServiceRoleFromAccountRequest(const DisassociateServiceRoleFromAccountRequest &other);
    DisassociateServiceRoleFromAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateServiceRoleFromAccountRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
