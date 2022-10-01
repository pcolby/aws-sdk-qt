// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEACCOUNTSTATUSREQUEST_P_H
#define QTAWS_LISTCREATEACCOUNTSTATUSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listcreateaccountstatusrequest.h"

namespace QtAws {
namespace Organizations {

class ListCreateAccountStatusRequest;

class ListCreateAccountStatusRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListCreateAccountStatusRequestPrivate(const OrganizationsRequest::Action action,
                                   ListCreateAccountStatusRequest * const q);
    ListCreateAccountStatusRequestPrivate(const ListCreateAccountStatusRequestPrivate &other,
                                   ListCreateAccountStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCreateAccountStatusRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
