// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKRESOURCESREQUEST_P_H
#define QTAWS_LISTSTACKRESOURCESREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "liststackresourcesrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackResourcesRequest;

class ListStackResourcesRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListStackResourcesRequestPrivate(const CloudFormationRequest::Action action,
                                   ListStackResourcesRequest * const q);
    ListStackResourcesRequestPrivate(const ListStackResourcesRequestPrivate &other,
                                   ListStackResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStackResourcesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
