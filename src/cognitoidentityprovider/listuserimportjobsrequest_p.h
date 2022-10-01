// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTUSERIMPORTJOBSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "listuserimportjobsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserImportJobsRequest;

class ListUserImportJobsRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ListUserImportJobsRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ListUserImportJobsRequest * const q);
    ListUserImportJobsRequestPrivate(const ListUserImportJobsRequestPrivate &other,
                                   ListUserImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserImportJobsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
