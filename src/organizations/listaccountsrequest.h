// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSREQUEST_H
#define QTAWS_LISTACCOUNTSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListAccountsRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListAccountsRequest : public OrganizationsRequest {

public:
    ListAccountsRequest(const ListAccountsRequest &other);
    ListAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
