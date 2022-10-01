// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONADMINACCOUNTSREQUEST_H
#define QTAWS_LISTORGANIZATIONADMINACCOUNTSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class ListOrganizationAdminAccountsRequestPrivate;

class QTAWSMACIE2_EXPORT ListOrganizationAdminAccountsRequest : public Macie2Request {

public:
    ListOrganizationAdminAccountsRequest(const ListOrganizationAdminAccountsRequest &other);
    ListOrganizationAdminAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationAdminAccountsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
