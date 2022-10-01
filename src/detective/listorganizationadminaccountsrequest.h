// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONADMINACCOUNTSREQUEST_H
#define QTAWS_LISTORGANIZATIONADMINACCOUNTSREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class ListOrganizationAdminAccountsRequestPrivate;

class QTAWSDETECTIVE_EXPORT ListOrganizationAdminAccountsRequest : public DetectiveRequest {

public:
    ListOrganizationAdminAccountsRequest(const ListOrganizationAdminAccountsRequest &other);
    ListOrganizationAdminAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationAdminAccountsRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
