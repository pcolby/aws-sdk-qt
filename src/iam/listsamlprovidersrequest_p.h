// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERSREQUEST_P_H
#define QTAWS_LISTSAMLPROVIDERSREQUEST_P_H

#include "iamrequest_p.h"
#include "listsamlprovidersrequest.h"

namespace QtAws {
namespace Iam {

class ListSAMLProvidersRequest;

class ListSAMLProvidersRequestPrivate : public IamRequestPrivate {

public:
    ListSAMLProvidersRequestPrivate(const IamRequest::Action action,
                                   ListSAMLProvidersRequest * const q);
    ListSAMLProvidersRequestPrivate(const ListSAMLProvidersRequestPrivate &other,
                                   ListSAMLProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSAMLProvidersRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
