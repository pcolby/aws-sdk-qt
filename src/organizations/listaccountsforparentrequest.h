// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPARENTREQUEST_H
#define QTAWS_LISTACCOUNTSFORPARENTREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListAccountsForParentRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListAccountsForParentRequest : public OrganizationsRequest {

public:
    ListAccountsForParentRequest(const ListAccountsForParentRequest &other);
    ListAccountsForParentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountsForParentRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
