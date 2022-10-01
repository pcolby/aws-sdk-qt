// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERACCOUNTSREQUEST_H
#define QTAWS_LISTMEMBERACCOUNTSREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class ListMemberAccountsRequestPrivate;

class QTAWSFMS_EXPORT ListMemberAccountsRequest : public FmsRequest {

public:
    ListMemberAccountsRequest(const ListMemberAccountsRequest &other);
    ListMemberAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMemberAccountsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
