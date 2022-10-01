// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERACCOUNTSREQUEST_H
#define QTAWS_LISTMEMBERACCOUNTSREQUEST_H

#include "macierequest.h"

namespace QtAws {
namespace Macie {

class ListMemberAccountsRequestPrivate;

class QTAWSMACIE_EXPORT ListMemberAccountsRequest : public MacieRequest {

public:
    ListMemberAccountsRequest(const ListMemberAccountsRequest &other);
    ListMemberAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMemberAccountsRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
