// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERTAGSREQUEST_P_H
#define QTAWS_LISTSAMLPROVIDERTAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listsamlprovidertagsrequest.h"

namespace QtAws {
namespace Iam {

class ListSAMLProviderTagsRequest;

class ListSAMLProviderTagsRequestPrivate : public IamRequestPrivate {

public:
    ListSAMLProviderTagsRequestPrivate(const IamRequest::Action action,
                                   ListSAMLProviderTagsRequest * const q);
    ListSAMLProviderTagsRequestPrivate(const ListSAMLProviderTagsRequestPrivate &other,
                                   ListSAMLProviderTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSAMLProviderTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
