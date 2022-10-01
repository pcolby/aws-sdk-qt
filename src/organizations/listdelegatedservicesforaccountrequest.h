// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDSERVICESFORACCOUNTREQUEST_H
#define QTAWS_LISTDELEGATEDSERVICESFORACCOUNTREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedServicesForAccountRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListDelegatedServicesForAccountRequest : public OrganizationsRequest {

public:
    ListDelegatedServicesForAccountRequest(const ListDelegatedServicesForAccountRequest &other);
    ListDelegatedServicesForAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDelegatedServicesForAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
