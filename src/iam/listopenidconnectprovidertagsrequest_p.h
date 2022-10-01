// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERTAGSREQUEST_P_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERTAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listopenidconnectprovidertagsrequest.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProviderTagsRequest;

class ListOpenIDConnectProviderTagsRequestPrivate : public IamRequestPrivate {

public:
    ListOpenIDConnectProviderTagsRequestPrivate(const IamRequest::Action action,
                                   ListOpenIDConnectProviderTagsRequest * const q);
    ListOpenIDConnectProviderTagsRequestPrivate(const ListOpenIDConnectProviderTagsRequestPrivate &other,
                                   ListOpenIDConnectProviderTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOpenIDConnectProviderTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
