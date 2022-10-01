// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERACCOUNTREQUEST_H
#define QTAWS_ASSOCIATEMEMBERACCOUNTREQUEST_H

#include "macierequest.h"

namespace QtAws {
namespace Macie {

class AssociateMemberAccountRequestPrivate;

class QTAWSMACIE_EXPORT AssociateMemberAccountRequest : public MacieRequest {

public:
    AssociateMemberAccountRequest(const AssociateMemberAccountRequest &other);
    AssociateMemberAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMemberAccountRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
