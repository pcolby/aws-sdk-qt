// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERACCOUNTREQUEST_H
#define QTAWS_DISASSOCIATEMEMBERACCOUNTREQUEST_H

#include "macierequest.h"

namespace QtAws {
namespace Macie {

class DisassociateMemberAccountRequestPrivate;

class QTAWSMACIE_EXPORT DisassociateMemberAccountRequest : public MacieRequest {

public:
    DisassociateMemberAccountRequest(const DisassociateMemberAccountRequest &other);
    DisassociateMemberAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMemberAccountRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
