// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINACCOUNTSREQUEST_H
#define QTAWS_LISTDELEGATEDADMINACCOUNTSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class ListDelegatedAdminAccountsRequestPrivate;

class QTAWSINSPECTOR2_EXPORT ListDelegatedAdminAccountsRequest : public Inspector2Request {

public:
    ListDelegatedAdminAccountsRequest(const ListDelegatedAdminAccountsRequest &other);
    ListDelegatedAdminAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDelegatedAdminAccountsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
