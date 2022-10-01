// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTDOMAINASSOCIATIONSREQUEST_P_H

#include "amplifyrequest_p.h"
#include "listdomainassociationsrequest.h"

namespace QtAws {
namespace Amplify {

class ListDomainAssociationsRequest;

class ListDomainAssociationsRequestPrivate : public AmplifyRequestPrivate {

public:
    ListDomainAssociationsRequestPrivate(const AmplifyRequest::Action action,
                                   ListDomainAssociationsRequest * const q);
    ListDomainAssociationsRequestPrivate(const ListDomainAssociationsRequestPrivate &other,
                                   ListDomainAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainAssociationsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
