// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSREQUEST_H
#define QTAWS_LISTACCOUNTSREQUEST_H

#include "ssorequest.h"

namespace QtAws {
namespace Sso {

class ListAccountsRequestPrivate;

class QTAWSSSO_EXPORT ListAccountsRequest : public SsoRequest {

public:
    ListAccountsRequest(const ListAccountsRequest &other);
    ListAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountsRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
