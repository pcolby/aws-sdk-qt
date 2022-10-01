// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYGROUPSREQUEST_P_H
#define QTAWS_LISTKEYGROUPSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listkeygroupsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListKeyGroupsRequest;

class ListKeyGroupsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListKeyGroupsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListKeyGroupsRequest * const q);
    ListKeyGroupsRequestPrivate(const ListKeyGroupsRequestPrivate &other,
                                   ListKeyGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKeyGroupsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
